#include "shell.h"

int main(int argc, char **argv)
{
        char *buffer;
        int mode_s = 1;
        size_t n;
        ssize_t line;
	char *pathfind;
	char **token;

        n = 1024;
        buffer = malloc(n);
        if (buffer == NULL)
	{
                perror("Failure allocating space for malloc");
		return (1);
	}

        while (mode_s)
        {
                mode_s = isatty(STDIN_FILENO);
                if (mode_s == 1)
                {
                        write(STDOUT_FILENO, "$", 1);
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
			if (strcmp(buffer, "exit") == 0)
			{
				free(buffer);
				exit(EXIT_SUCCESS);
			}

			buffer[line - 1] = '\0';
			token = _tok(buffer, " ");
			pathfind = command_path(token);
			if (pathfind != NULL)
			{	
				_exec(pathfind, token);
				free(pathfind);
			}
			else
			{
				write(STDERR_FILENO, argv[0], _strlen(argv[0]));
				write(STDERR_FILENO, ": 1: ", 5);
				write(STDERR_FILENO, token[0], _strlen(token[0]));
				write(STDERR_FILENO, ": not found\n", 12);
			}
		}
                else
                {
                        break;
                }
        }
        free(buffer);
	return (0);
}
