#include "main.h"
/**
 * _strlen_recursion - return the lenght of a string
 * @s: string to find lenght
 * Return: return 0 if it's equal to null byte, otherwise
 * return string lenght.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
