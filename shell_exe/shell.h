#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void _exec(char * buffer);
int _strlen(char *str);
char **_tok(char *buffer, int *tokenlen);

#endif
