#include "shell.h"

int main(int argc, char **argv)
{
        char *buffer;
        int mode_s = 1;
        size_t n;
        ssize_t line;

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
                        buffer[line - 1] = '\0';
			_exec(buffer);
                }
                else
                {
                        break;
                }
        }
        free(buffer);
	return (0);
}
