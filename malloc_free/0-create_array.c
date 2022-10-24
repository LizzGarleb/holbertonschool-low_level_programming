#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initialize it with a specific char.
 * @c: character to be stored.
 * @size: how many times is gonna be stored.
 * Return: return null if size = 0, return pointer to the array,
 * or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	while (i <= size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
