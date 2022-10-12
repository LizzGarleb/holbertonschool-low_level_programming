#include "main.h"
/**
 * cap_string - capitalizes all word of a string
 * @str: string
 */
char *cap_string(char *str)
{
	int i, n;

	n = 0;

	char comp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i]<= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		while (n < 13)
		{
			n++;
			if (str[i] == comp[n])
			{
				if ((str[i] >= 'a' && str[i]<= 'z'))
                        	{
                           	     str[i] = str[i] - 32;
                        	}
			}
		}
	}
		return (str);
}
