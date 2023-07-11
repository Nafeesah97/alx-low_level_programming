#include "main.h"

/**
 * create_file - reates a file.
 * @filename: name of file
 * @text_content: content written inside the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, content, i;
	
	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp <= 0)
		return (-1);
	i = 0;
	while (*text_content)
	{
		i++;
		text_content++;
	}
	if (text_content != NULL)
	{
		content = write(fp, text_content, i);
		if (content <= 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);

	return (1);
}
