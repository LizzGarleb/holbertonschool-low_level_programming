#include "main.h"
/**
 * _puts - prints a string and new line
 * @str: string that it was given to us
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
