#include "shell.h"

void run(char *prompt, char *program)
{
	char *buffer;
	size_t n;
        ssize_t line;
	char *pathfind;
	char **token;
	int builtin_checker;

        n = 1024;
        buffer = malloc(n);
        if (buffer == NULL)
	{
                perror("Failure allocating space for malloc");
		exit(EXIT_FAILURE);
	}

        while (1)
        {
                write(STDOUT_FILENO, prompt, _strlen(prompt));
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
				perror("Getline");
                                free(buffer);
                                exit(EXIT_FAILURE);
                        }
		}
		if (line == 1)
		{
			free(buffer);
			continue;
		}
		buffer[line - 1] = '\0';
		token = _tok(buffer, " ");
		builtin_checker = _builtin(token);
		if (builtin_checker == -1)
		{
			pathfind = command_path(token);
			printf("%s\n", pathfind);
			if (pathfind != NULL)
			{	
				_exec(pathfind, token);
				free(pathfind);
			}
			else
			{
				write(STDERR_FILENO, program, _strlen(program));
				write(STDERR_FILENO, ": 1: ", 5);
				write(STDERR_FILENO, token[0], _strlen(token[0]));
				write(STDERR_FILENO, ": not found\n", 12);
			}
		}
	}
	free(buffer);
}
