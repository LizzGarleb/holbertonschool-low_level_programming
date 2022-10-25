#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 * @str: string to be copy
 * Return: return null if str = null otherwise return value of p
 */
char *_strdup(char *str)
{
	int lenght;
	char *p, *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	lenght = strlen(str);

	p = malloc(sizeof(char) * lenght + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	temp = p;

	while (*str)
	{
		*temp = *str;
		temp++;
		str++;
	}

	*temp = '\0';

	return (p);
}
