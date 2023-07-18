#include "shell.h"

void _exec(char *buffer)
{
	char *token;
	int status;
	pid_t child_pid;

	token = _tok(buffer);
	if (token == NULL)
	{
		perror("Token Error");
		exit(EXIT_FAILURE);
	}
	//char *exec[] = {token, NULL};

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
 	else if ( child_pid == 0)
	{
		if (execve(&token[0], &token, NULL) == -1)
		{
			perror("./shell");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
	free(token);
}
