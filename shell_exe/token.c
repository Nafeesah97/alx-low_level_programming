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

char *_tok(char *buffer)
{       
        const char *delim = " ";
        int buflen;
	int i;
	char *result = NULL;
	char *token;
        
	buflen = _strlen(buffer);
	result = malloc(sizeof(char*) * buflen);

	i = 0;
	token = strtok(buffer, delim);
	while (token)
	{
		result[i] = *token;
		i++;
		token = strtok(NULL, delim);
	}
	result[i] = '\0';
	return (result);
}
