#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters.
 * @c: c becomes a character
 *
 * Return: Return 1 if c is a letter, lowercase or uppercase, otherwise return 0.
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
