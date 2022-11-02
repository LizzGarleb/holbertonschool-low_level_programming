#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints string, followed by a new line
 * @separator: print between string
 * @n: # of string passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *a;

	if (separator == NULL)
	{
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(p, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
