#include "main.h"
/**
 * _strcat - This funciont appendes the src to the dest string,
 * overwritingh the termination null byte at the end of dest,
 * and then adds a termination null byte.
 * @dest: original
 * @src: to be added to dest
 * Return: a pointer to the resulting string of dest.
 */
char *_strcat(char *dest, char *src)
{
	int move, original;

	original = 0;
	move = 0;

	while (dest[original] != '\0')
		original++;

	while (src[move] != '\0')
	{
		dest[original] = src[move];
		original++;
		move++;
	}

	dest[original] = '\0';

	return (dest);

}
