#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		void (*p)(char *);

		p = f;
		p(name);
	}
}
