#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define UNUSED_VAR(var) ((void)(var))

extern char **environ;

typedef struct builtin
{
	char *cmd;
	int (*act)();
} built_cmd;

int _builtin(char **tokens);
int _env();
void _exec(char * buffer, char **token);
int _strlen(char *str);
char **_tok(char *buffer, const char* delim);
char *_getenv(char* var);
char *path_checker(char **token);
char *command_path(char **token);
void run(char *buffer, char *program);
char *_strcpy(char *d, char *s);
char *_strdup(char *s);

#endif
