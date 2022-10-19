#include "main.h"
/**
 * _strncat - functions is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n
 * or more bytes.
 * Return: Return a pointer to the resulting string dest
 * @src: sources
 * @dest: destination
 * @n: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenght;

	lenght = 0;

	while (dest[lenght] != '\0')
		lenght++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenght + i] = src[i];
	}
	dest[lenght + i] = '\0';
	return (dest);
}
