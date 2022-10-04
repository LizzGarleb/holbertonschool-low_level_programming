#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Return 0 when done.
 */
void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
