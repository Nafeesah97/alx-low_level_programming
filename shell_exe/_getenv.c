#include "shell.h"
#define PATH_MAX 32

char *_getenv(char* var)
{
	char **env = environ;
	size_t var_len = _strlen(var);
	char *path;

	path = malloc(sizeof(char *) * PATH_MAX);
	if (path == NULL)
	{
		free(path);
		exit(EXIT_FAILURE);
	}
	while (*env != NULL)
	{
		if (strncmp(*env, var, var_len) == 0 && (*env)[var_len] == '=') 
		{
			path = &(*env)[var_len + 1];
		}
		env++;
	}

	printf("%s\n", path);
	return (path);
}
