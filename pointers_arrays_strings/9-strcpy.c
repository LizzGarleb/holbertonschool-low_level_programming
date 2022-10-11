#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src
 * including the terminating null byte(\0), to the buffer
 * pointer to by dest.
 * @dest: destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	int copy;

	copy = 0;

	while (src[copy] != '\0')
	{
		dest[copy] = src[copy];
		copy++;
	}
	return (dest);
}