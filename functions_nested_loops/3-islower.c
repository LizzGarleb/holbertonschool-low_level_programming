#include "main.h"
/**
 * _islower - Checks for lowercase characters.
 * @c: c becomes a letter
 *
 * Return: Return 1 is c is a letter, lowercase or uppercase, return 0 otherwise.
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
