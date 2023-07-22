#include "shell.h"
#define PATH_MAX 32

char *_getenv(char* var)
{
	char **env = environ;
	size_t var_len = _strlen(var);
	char *path = NULL;

	while (*env != NULL)
	{
		if (strncmp(*env, var, var_len) == 0 && (*env)[var_len] == '=') 
		{
			path = malloc(_strlen(*env) - var_len);
			if (path == NULL)
			{
				perror("Memory allocation error");
				exit(EXIT_FAILURE);
			}
			strcpy(path, *env + var_len + 1);
			break;
		}
		env++;
	}

	printf("%s\n", path);
	return (path);
}
