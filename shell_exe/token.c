#include "shell.h"

int _strlen(char *str)
{
        int count = 0;
	
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char **_tok(char *buffer, const char* delim)
{
	int i;
	char **result;
	char *token;
        int token_size;
	char **temp;

	i = 0;
	token_size = 16;
	result = malloc(token_size * sizeof(char *));
	if (result == NULL)
	{
		perror("Memoory allocation error");
		exit(EXIT_FAILURE);
	}

	token = strtok(buffer, delim);
	while (token != NULL)
	{
		if (i >= token_size)
		{
			token_size *= 2;
			temp = realloc(result, token_size * sizeof(char *));
			if (temp == NULL)
			{
				perror("Memory allocation error");
				exit(EXIT_FAILURE);
			}
			result = temp;
		}
		result[i] = strdup(token);
		if (result[i] == NULL)
		{
			perror("Memory allocation error");
			exit(EXIT_FAILURE);
		}
		i++;
		token = strtok(NULL, delim);

	}
	temp = realloc(result, sizeof(char *) * (i + 1));
	
	if (temp == NULL)
        {
                perror("Memory allocation error");
                exit(EXIT_FAILURE);
        }
	result = temp;

        if (strcmp(result[0], "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	result[i] = NULL;
        return (result);
}
