#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute(char *buffer)
{
	char *token;
	char *delim = " ";
	char *exec[2];
	pid_t child_pid;
	int status;

	token = strtok(buffer, delim);
	while (token)
	{
		exec[0] = token;
		exec[1] = NULL;
		child_pid = fork();
		if (child_pid == -1)
		{
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
}
