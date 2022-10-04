#include "main.h"
/**
 * _islower - Checks for lowercase characters.
 * @c: c becomes a letter
 *
 * Return: Return 0 when done.
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
