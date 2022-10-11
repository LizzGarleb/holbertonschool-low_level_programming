#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer string name
 */
void rev_string(char *s)
{
	char tmp;
	int i, lenght, lenght2;

	lenght = 0;
	lenght2 = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	lenght2 = lenght - 1;

	for (i = 0; i < lenght / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght2];
		s[lenght2--] = tmp;
	}
}
