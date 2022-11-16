#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number
 * @index: position inside the number that u wanna return
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int var = 0;

	if (index > 63)
		return (-1);

	var = ((n >> index) & 1);

	return (var);
}
