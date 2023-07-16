#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t child_pid;
	int i, status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("fork () error");
			exit(EXIT_FAILURE);
		}
		else if (child_pid == 0)
		{
			printf("child process %d\n", i + 1);
			execve(argv[0], argv, NULL);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error excve");
			}
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
