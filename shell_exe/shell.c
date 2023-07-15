#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	pid_t child_pid;
	int status, mode_s;
	size_t n;
	ssize_t line;
        char *buffer = NULL;
	char *delim = " ";
	char *token;
	char *exec[2];

	n = 1024;
	while (1)
	{
		mode_s = isatty(STDIN_FILENO);
		if (mode_s == 1)
			write(STDOUT_FILENO, "$", n);
		else
			break;
	}

	buffer = malloc(n);
	if (buffer == NULL)
	{
               	free(buffer);
               	return 0;
        }

        line = getline(&buffer, &n, stdin);
        if (line == -1)
        {
                free(buffer);
                printf("error");
		exit(EXIT_FAILURE);
        }

	token = strtok(buffer, delim);
        while (token)
        {
                token = strtok(NULL, delim);
        }

	exec[0] = token;
	exec[1] = NULL;
	child_pid = fork();
	if (child_pid == -1)
	{
		exit(EXIT_FAILURE);
	}
	else if ( child_pid == 0)
	{
		execve(exec[0], exec, NULL);
		if (execve(exec[0], exec, NULL) == -1)
		{
			perror("command not found");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}

	return (0);
}
