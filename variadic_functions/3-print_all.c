#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list a;
	char *p, *s_let;
	int i_num;
	double dec_num;

	va_start(a, format);
	while (*p)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'd':
				i_num = va_arg(a, int);
				printf("%d", i_num);
				break;
			case 'f':
				dec_num = va_arg(a, double);
				printf("%f", dec_num);
				break;
			case 's':
				s_let = va_arg(a , char *);
				while (*s_let)
				{
					_putchar(*s_let);
					s_let++;
					break;
				}
			case 'c':
				_putchar(*p);
				break;
		}
	}
	va_end(a);
	printf("\n");
}
