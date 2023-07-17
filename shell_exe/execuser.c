#include "shell.h"

void _exec(char *buffer)
{
	char *token;
	char **exec;
	int exec_size, status;
	int *tokenlen;
	pid_t child_pid;

	token = _tok(buffer, &tokenlen);
	if (token == NULL)
	{
		perror("Token Error");
		exit(EXIT_FAILURE);
	}

	exec_size = tokenlen + 1;
	exec = malloc(sizeof(char *) * (exec_size));
	while (token)
	{
		exec[tokenlen] = token;
		exec[tokenlen + 1] = NULL;
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
