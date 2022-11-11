#include "main.h"
/**
 * _strlen - Return the lenght of a string
 * @s: pointer to the string
 * Return: the lenght of the string.
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		;

	return (lenght);
}

/**
 * is_palindrome - Write a function check is the given string
 * is palidrome
 * @s: the string to be checked
 * Return: return 1 if its empty, otherwise return 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return (1);
	else
		return (0);
}
