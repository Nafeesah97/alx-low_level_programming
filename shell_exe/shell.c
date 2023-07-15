#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	pid_t child_pid;
	int status;
	size_t n;
	ssize_t line;
        char *buffer = NULL;
	char *delim = " ";
	char *token, *arg_copy;

	arg_copy = strdup(argv);
	n = 1024;
        printf("$");

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
        }

	token = strtok(arg_copy, delim);
        while (token)
        {
                token = strtok(NULL, delim);
        }

	child_pid = fork();
	if (child_pid == -1)
	{
		exit(EXIT_FAILURE);
	}
	else if ( child_pid == 0)
	{
		execve(token, &token, NULL);
		if (execve(token, &token, NULL) == -1)
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
