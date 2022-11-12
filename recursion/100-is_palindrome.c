#include "main.h"
#include <string.h>
/**
 * is_palindrome - Write a function check is the given string
 * is palidrome
 * @s: the string to be checked
 * Return: return 1 if its empty, otherwise return 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	else
		return (0);
}
