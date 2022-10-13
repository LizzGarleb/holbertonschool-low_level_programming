#include "main.h"
/**
 * _memcpy - 
 * @dest: to where Im sending the copy.
 * @src: from where Im coping
 * @n: number of spaces to fill.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
