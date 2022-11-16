#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @index: position to be set
 * @n: given number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	(*n |= (1 << index));
	return (1);
}
