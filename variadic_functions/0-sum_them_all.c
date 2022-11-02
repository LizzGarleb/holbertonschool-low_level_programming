#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameter
 * @n: count
 * Return: the result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list p;

	if (n == 0)
	{
		return (0);
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}

	va_end(p);

	return (sum);
}
