#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: given string
 * Return: the value of the string
 */
char *leet(char *s)
{
	int i, j;

	char let[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
