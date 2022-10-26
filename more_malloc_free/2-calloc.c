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
	unsigned int i, *n, *ch;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (size == sizeof(char))
	{
		ch = malloc(nmemb * size);
		if (ch == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < nmemb; i++)
			{
				ch[i] = '0';
			}
		}
		return (ch);
	}
	n = malloc(nmemb * size);
	if (n == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{
			n[i] = 0;
		}
	}
	return (n);
}
