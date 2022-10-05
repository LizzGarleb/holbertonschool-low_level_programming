#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: Its a random number.
 * Return: Number count from n to 98.
 */
void print_to_98(int n)
{
	int a, b;

	if(n <= 98)
	{
		for(a = n; a <= 98; a++)
		{	
		_putchar(a);
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n >= 98)
	{
		for(b = n; b >= 98; b--)
		{
			_putchar(b);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
