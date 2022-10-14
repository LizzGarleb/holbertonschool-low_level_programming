#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: substring
 * Return: the value of needle and haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (i == j)
			{
				return (haystack);
			}
			else
			{
				break;
			}
		}
	}
	return (0);
}char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (i == j)
			{
				return (haystack);
			}
			else
			{
				break;
			}
		}
	}
	return (0);
}
