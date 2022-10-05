#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: Its a random number.
 * Return: Number count from n to 98.
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		while (n <= 98; n++)
		{
		printf("%i, ", n);
		}
		printf('\n');
	}
	else if (n >= 98)
	{
		while (n >= 98; n--)
		{
			printf("%i, ", n);
		}
		printf('\n');
	}
}
