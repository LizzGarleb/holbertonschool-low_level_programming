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
	int i = 0, j = 0;
	char *s_let = NULL;

	va_start(a, format);
	while (format[j])
	{
		j++;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				break;
			case 's':
				s_let = va_arg(a, char *);
				if (s_let == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s_let);
				break;
		}
		if (format[i - 1] != '\0' && i != j - 1)
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
