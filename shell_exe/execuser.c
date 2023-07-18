#include "shell.h"

void _exec(char *buffer)
{
	char **token;
	int status, i;
	pid_t child_pid;

	token = _tok(buffer);
	if (token == NULL || token[0] == NULL)
	{
		perror("Invalid Command");
		exit(EXIT_FAILURE);
	}

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
 	else if ( child_pid == 0)
	{
		if (execve(token[0], token, NULL) == -1)
		{
			perror(token[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
	for (i = 0; token[i] != NULL; i++)
	{
		free(token[i]);
	}
	free(token);
}
