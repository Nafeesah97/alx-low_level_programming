#include "shell.h"

void _exec(char *buffer)
{
	char *token;
	char *delim = " ";
	char **exec;
	int exec_size = 2;
	pid_t child_pid;
	int status;

	token = strtok(buffer, delim);
	exec = malloc(sizeof(char *) * (exec_size));
	while (token)
	{
		exec[0] = token;
		exec[1] = NULL;
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
 		else if ( child_pid == 0)
		{
			if (execve(exec[0], exec, NULL) == -1)
			{
				perror("./shell");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
			break;
		}
		token = strtok(NULL, delim);
	}
	free(exec);
}
