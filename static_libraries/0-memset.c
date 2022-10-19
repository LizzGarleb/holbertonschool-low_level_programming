#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointer
 * to by s with the constant byte b.
 * Return: a pointer to the memory area s
 * @s: memory space to be filled
 * @b: bytes to be fill
 * @n: number of spaces to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
