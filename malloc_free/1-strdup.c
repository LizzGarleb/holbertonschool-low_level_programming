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

	lenght = strlen(str);

	if (p == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * lenght + 1);

<<<<<<< HEAD
	p = temp;
=======
	temp = p;

	if (p)
	{
	}

>>>>>>> 9901c690e9b0d1ebc59c6bbd878f2673a87947cd
	while (*str)
	{
		*temp = *str;
		temp++;
		str++;
	}

	*temp = '\0';

	return (p);
}
