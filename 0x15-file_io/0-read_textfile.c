#include "main.h"

/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of leters to be copied
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *file;
	ssize_t letters_read, letters_written;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * (letters + 1));
	if (file == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(file);
		return (0);
	}

	letters_read = read(fp, file, letters);
	if (letters_read <= 0)
	{
		free(file);
		close(fp);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, file, letters_read);
	if (letters_written <= 0 || letters_written != letters_read)
	{
		free(file);
		close(fp);
		return (0);
	}

	free(file);
	close(fp);

	return (letters_written);
}
