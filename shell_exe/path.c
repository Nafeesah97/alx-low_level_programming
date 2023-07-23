#include "shell.h"

char *path_checker(char **token)
{
	char *full_path, *get_path;
	char **tok_path;
	int i, j;

	get_path = _getenv("PATH");
	tok_path = _tok(get_path, ":");
	full_path = NULL;

	i = 0;
	while (tok_path[i] != NULL)
	{
		full_path = malloc(strlen(tok_path[i]) + strlen(token[0]) + 2);
		if (full_path == NULL)
		{
			perror("Memory allocation error");
			exit(EXIT_FAILURE);
		}
		strcpy(full_path, tok_path[i]);
		strcat(full_path, "/");
		strcat(full_path, token[0]);
		if (access(full_path, X_OK) == 0)
		{
			break;
		}
		free(full_path);
		full_path = NULL;

		i++;
	}

	for (j = 0; tok_path[j] != NULL; j++)
	{
		free(tok_path[j]);
	}
	free(tok_path);
	if (full_path == NULL)
	{
		return (NULL);
	}

	return (full_path);
}


char *command_path(char **token)
{
	char *com_path = NULL;

	if (strchr(token[0], '/') != NULL)
	{
		if (access(token[0], X_OK) == 0)
		{
			com_path = strdup(token[0]);
		}
	}
	else
	{
		com_path = path_checker(token);
	}
	if (com_path == NULL)
	{
		return (NULL);
	}
	return (com_path);
}
