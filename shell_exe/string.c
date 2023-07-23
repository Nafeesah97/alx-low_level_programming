#include "shell.h"

char *_strcpy(char *d, char *s)
{
	int i;
	char *res;
	
	res = d;
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (res);
}

char *_strdup(char *s)
{
	size_t l;
	char *temp, *d, *res;

	if (s == NULL)
		return (NULL);
	temp = s;
	while (*temp != '\0')
	{
		l++;
		temp++;
	}

	d = malloc(sizeof(char *) * (l + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	res = d;
	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (res);
}


