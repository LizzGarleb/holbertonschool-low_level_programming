#include "main.h"
/**
 * _islower - print a string
 * @c: is tha aphabeth
 *
 * Return: zero is suceddful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
