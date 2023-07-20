#include "shell.h"

char *path_checker(char **token)
{
	char *full_path, *get_path;
	char **tok_path;
	int i;

	get_path = _getenv("PATH");
	tok_path = _tok(get_path, ":");

	i = 0;
	while (tok_path[i] != NULL)
	{
		full_path = strcat(strcat(tok_path[i], "/"), token[0]);
		i++;
	}
	return (full_path);
}


char *command_path(char **token)
{
	char *com_path;

	if (strchr(token[0], '/') != NULL)
	{
		if (access(token[0], X_OK) == 0)
		{
			com_path = strdup(token[0]);
		}
	}
	else
	{
		if (access(path_checker(token), X_OK) == 0)
		{
			com_path = path_checker(token);
		}
	}
	return (com_path);
}
