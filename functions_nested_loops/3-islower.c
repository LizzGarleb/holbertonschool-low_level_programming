#include "main.h"
/**
 * _islower - print a string
 * Return: sucessfull
 * @c -  is the alphabet (parameter)
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
