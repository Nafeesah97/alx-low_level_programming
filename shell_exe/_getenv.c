#include "shell.h"

char *_getenv(char* var)
{
	char **env = environ;
	size_t var_len = _strlen(var);
	char *path = NULL;

	while (*env != NULL)
	{
		if (_strncmp(*env, var, var_len) == 0 && (*env)[var_len] == '=') 
		{
			path = malloc(_strlen(*env) - var_len);
			if (path == NULL)
			{
				perror("Memory allocation error");
				exit(EXIT_FAILURE);
			}
			_strcpy(path, *env + var_len + 1);
			break;
		}
		env++;
	}
	return (path);
}
