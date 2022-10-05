#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n : This is a parameter
 * Return: Return the value of the last digit.
 */
int print_last_digit(int n)
{
	int rawr 
	rawr = n % 10;
	n = rawr;

	if (rawr < 0)
	{
		rawr = n * (-1);
		_putchar(rawr);
	}
	return (n);
}
