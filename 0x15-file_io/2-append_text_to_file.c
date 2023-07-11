#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, content;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
		while (feof fp)
		{
			content = write(fp, text_content, i);
			if (content == -1)
			{
				close(fp);
				return (-1);
			}
		}
	}

	close(fp);
	return (1);
}
