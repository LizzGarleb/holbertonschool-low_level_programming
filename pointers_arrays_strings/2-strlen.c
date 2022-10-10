#include "main.h"
/**
 * _strlen - Return the lenght of a string
 * @s: charater pointer
 * Return: its gonna return the lenght of the string
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		;

	return (lenght);
}
