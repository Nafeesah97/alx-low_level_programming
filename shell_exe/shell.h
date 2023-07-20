#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void _exec(char * buffer, char **token);
int _strlen(char *str);
char **_tok(char *buffer, const char* delim);
char *_getenv(char* var);
char *path_checker(char **token);
char *command_path(char **token);

#endif
