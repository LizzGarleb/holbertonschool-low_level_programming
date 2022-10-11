#include "main.h"
/**
 * puts2 - Print every other character of a string
 * @str: given point string
 */
void puts2(char *str)
{
	int lenght, a;

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	for (a = 0; a < lenght; a++)
	{
		if ((a % 2) == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar('\n');
}
