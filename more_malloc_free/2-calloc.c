#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: amount of elementes
 * @size: the data type
 * Return: the value of the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
