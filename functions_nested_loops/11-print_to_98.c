#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Its a random number.
 * Return: Number count from n to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				pritf("%i, ", n)
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
			n--;
		}
	}
}
