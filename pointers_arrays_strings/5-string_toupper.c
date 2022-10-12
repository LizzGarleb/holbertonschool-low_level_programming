#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a
 * string to uppercase
 * @str: string
 * Return: return the value of the string
 */
char *string_toupper(char *str)
{
	int lenght, convert;

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (convert = 0; convert < lenght; convert++)
	{
		if (str[convert] >= 'a' && str[convert] <= 'z')
		{
			str[convert] = str[convert] - 32;
		}
	}
	return (str);
}
