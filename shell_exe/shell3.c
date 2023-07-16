#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char *get_user(void)
{
    char *buffer;
    int mode_s = 1;
    size_t n;
    ssize_t line;

    n = 1024;
    buffer = malloc(n);
    if (buffer == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    while (mode_s)
    {
        mode_s = isatty(STDIN_FILENO);
        if (mode_s == 1)
        {
            write(STDOUT_FILENO, "$ ", 2);
            fflush(stdout);
            line = getline(&buffer, &n, stdin);
            if (line == -1)
            {
                if (feof(stdin))
                {
                    write(STDOUT_FILENO, "\n", 1);
                    free(buffer);
                    exit(EXIT_SUCCESS);
                }
                else
                {
                    free(buffer);
                    exit(EXIT_FAILURE);
                }
            }
            buffer[line - 1] = '\0';
        }
        else
        {
            break;
        }
    }

    return buffer;
}

void execute(char *buffer)
{
    char *token;
    char *delim = " ";
    char **exec;
    pid_t child_pid;
    int status;
    int num_tokens = 0;

    token = strtok(buffer, delim);
    while (token)
    {
        token = strtok(NULL, delim);
        num_tokens++;
    }

    exec = malloc((num_tokens + 1) * sizeof(char *));
    if (exec == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    token = strtok(buffer, delim);
    for (int i = 0; token != NULL; i++)
    {
        exec[i] = token;
        token = strtok(NULL, delim);
    }
    exec[num_tokens] = NULL;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        execve(exec[0], exec, NULL);
        perror("execve");
        exit(EXIT_FAILURE);
    }
    else
    {
        wait(&status);
    }

    free(exec);
}

int main(int argc, char **argv)
{
    char *prompt;

    prompt = get_user();
    execute(prompt);
    free(prompt);
    return 0;
}

