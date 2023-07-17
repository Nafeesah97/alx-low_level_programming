#include "shell.h"

int _strlen(char *str)
{
        int count = 0;
	
	while (str)
	{
		count++;
	}
	return (count);
}

char **_tok(char *buffer, int *tokenlen)
{       
        const char *delim = " ";
        int buflen;
	int i;
	char **result;
	char *token;
        
	buflen = _strlen(buffer);
	result = malloc(sizeof(char*) * buflen);
	if (result == NULL)
	{
		*tokenlen = 0;
		return (NULL);
	}
	i = 0;
	token = strtok(buffer, delim);
	while (token)
	{
		result[i] = token;
		i++;
	}
	token = strtok(NULL, delim);
	*tokenlen = i;
	return (result);
}
