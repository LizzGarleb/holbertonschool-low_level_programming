#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string to be concatenated
 * @n: how many character ot s2 we gonna passed
 * Return: return null is malloc fail, otherwise return p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *p;

	if (s1 == NULL)
	{
		s1_len = 0;
	}
	else
	{
		s1_len = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2_len = 0;
	}
	else
	{
		s2_len = strlen(s2);
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	p = malloc((s1_len + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[s1_len + i] = s2[i];
	}
	p[i + s1_len] = '\0';
	return (p);
}
