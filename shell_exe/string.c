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
