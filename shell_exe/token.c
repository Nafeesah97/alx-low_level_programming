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
	int buflen;
	int i;
	char **result;
	char *token;
        
	buflen = _strlen(buffer);
	result = malloc(sizeof(char*) * buflen);

	i = 0;
	token = strtok(buffer, delim);
	while (token)
	{
		result[i] = strdup(token);
		i++;
		token = strtok(NULL, delim);
	}
	if (result == NULL || result[0] == NULL)
        {
                perror("Invalid Command");
                exit(EXIT_FAILURE);
        }
        if (strcmp(result[0], "exit") == 0)
        {
                free(result);
                exit(EXIT_SUCCESS);
        }
	result[i] = NULL;
        return (result);
}
