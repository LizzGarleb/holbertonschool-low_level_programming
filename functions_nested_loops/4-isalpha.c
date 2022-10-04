#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters.
 * @c: c becomes a character
 *
 * Return: Return 0 when done.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
