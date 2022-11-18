#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: if filename is null (-1), on sucedd (1), upon fail (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
	}
	return (1);
}
