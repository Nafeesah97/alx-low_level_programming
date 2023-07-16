#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char *token;
	char *delim = " ";
	char str[] = "I am a girl";

	token = strtok(str, delim);
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	
	return (0);
}


