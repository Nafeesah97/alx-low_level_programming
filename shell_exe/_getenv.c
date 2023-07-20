#include "shell.h"

char *_getenv(char* var)
{
	char **env = environ;
	size_t var_len = _strlen(var);

	while (*env != NULL)
	{
		if (strncmp(*env, var, var_len) == 0 && (*env)[var_len] == '=') 
		{
			return (&(*env)[var_len + 1]);
		}
		env++;
	}

	return (NULL);
}
