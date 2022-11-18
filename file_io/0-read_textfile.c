#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: points to the file to be read
 * @letters: how many letter we gonna read
 *
 * Return: if the file can not opened or read, return 0.
 * If filename is NULL return 0.
 * If write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buf, letters);
	buf[letters + 1] = '\0';

	write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(*filename);
	return (bytes);
}
