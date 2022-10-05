#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n : This is a parameter
 * Return: Return the value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = a  * (-1);
	}
	_putchar('0' + a);
	return (a);
}
