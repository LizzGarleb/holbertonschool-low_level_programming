#include "main.h"
/**
 * _puts_recursions - prints a string, followed by a new line
 * @s: string to print.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else 
	{
		_putchar('\n');
	}
}
