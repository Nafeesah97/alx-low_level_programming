#include "main.h"

/**
 * error_usage - if arg is more than 3, print error
 * @argv: file
 */

void error_usage(char *argv[])
{
	dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
	exit(97);
}

/**
 * error_read - error when can't read
 * @argv: file
 */

void error_read(char *argv[])
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

/**
 * error_write - error when can't write
 * @argv: file
 */

void error_write(char *argv[])
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}

/**
 * error_close - error when closing
 * @fd: file
 */

void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - main function
 * @argc: number of arguement
 * @argv: arguements
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int fp_from, fp_to, BUFFER_SIZE = 1024;
	char *buffer;
	ssize_t l_read, l_write;
	int permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_usage(argv);
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
		error_read(argv);
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fp_to == -1)
		error_write(argv);
	buffer = malloc(BUFFER_SIZE);
	l_read = read(fp_from, buffer, BUFFER_SIZE);
	while (l_read > 0)
	{
		l_write = write(fp_to, buffer, l_read);
		if (l_write == -1)
		{
			close(fp_from);
			close(fp_to);
			error_write(argv);
		}
		l_read = read(fp_from, buffer, BUFFER_SIZE);
	}
	if (l_read == -1)
	{
		close(fp_from);
		close(fp_to);
		error_read(argv);
	}

	if (close(fp_from) == -1)
		error_close(fp_from);
	if (close(fp_to) == -1)
		error_close(fp_to);
	free(buffer);
	return (0);
}
