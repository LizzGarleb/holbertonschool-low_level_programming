#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Theres no return.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}

	_putchar('\n');
}
