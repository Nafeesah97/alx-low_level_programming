#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	char *prompt;

	prompt = get_user();
	execute(prompt);
	free(prompt);
	return (0);
}
