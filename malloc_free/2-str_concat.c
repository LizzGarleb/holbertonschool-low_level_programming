#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: inicial string
 * @s2: string to be concatenated
 * Return: return the value of s
 */
char *str_concat(char *s1, char *s2)
{
	int str1_lenght = strlen(s1);
	int str2_lenght = strlen(s2);
	int size = str1_lenght + str2_lenght;
	char *s;
	int i, j;

	s = malloc(size + 1 * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1_lenght; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < str2_lenght; j++)
	{
		s[str1_lenght + j] = s2[j];
	}

	s[size + 1] = '\0';

	return (s);
}
