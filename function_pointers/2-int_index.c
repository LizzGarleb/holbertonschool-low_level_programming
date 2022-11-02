#include "function_pointers.h"
/**
 * int_index- function that executes a function
 * gives as a parameter on each element of an array
 *
 * @array: print array
 *
 * @size: the size of the array
 *
 * @cmp: compare the array
 *
 * Return: if size is less then zero return -1, if no
 * element matches return -1, if compare was sucessfull
 * return the value.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int (*p)(int);

	p = cmp;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if ((*p)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
