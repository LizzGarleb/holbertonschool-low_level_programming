#include "main.h"
/**
 * main - print a string
 * Return: return 0 sucess
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}

	_putchar('\n');
	return;
}
