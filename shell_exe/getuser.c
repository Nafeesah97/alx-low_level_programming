#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char *get_user(void)
{
	char *buffer;
	int mode_s = 1;
	size_t n;
	ssize_t line;

	n = 1024;
	buffer = malloc(n);
        if (buffer == NULL)
		perror(" ");

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
                                        free(buffer);
                                        exit(EXIT_FAILURE);
                                }
				buffer[line - 1] = '\0';

                        }
		}
		else
		{
			break;
		}
	}
	free(buffer);
	return (buffer);
}
