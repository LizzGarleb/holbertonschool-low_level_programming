#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints a number
 * @separator: is the string to be printed between numbers
 * @n: number of interger passed to the functions
 * Return: if seperator is null dont print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	if (separator == NULL)
	{
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(p);
}
