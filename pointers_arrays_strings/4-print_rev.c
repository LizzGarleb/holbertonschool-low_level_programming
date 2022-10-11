#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: given string
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (*(s + lenght))
		lenght++;
	lenght = lenght - 1;

	while (lenght >= 0)
	{
		_putchar(*(s + lenght));
		lenght--;
	}
	_putchar('\n');
}
