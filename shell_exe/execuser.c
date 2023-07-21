#include "shell.h"

void _exec(char *pathfinder, char **token)
{
	pid_t child_pid, parent_pid;

	child_pid = fork();
	parent_pid = getppid();
	printf("%u/%u\n", child_pid, parent_pid);
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
 	else if ( child_pid == 0)
	{
		if (execve(pathfinder, token, NULL) == -1)
		{
			perror(token[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
