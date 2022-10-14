#include "main.h"
/**
 *
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
				return (needle);
			}
			else
			{
				break;
			}
		}
	}
	return (0);
}
