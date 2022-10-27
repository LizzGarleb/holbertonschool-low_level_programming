#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that cretes an array of intergers
 * @min: the starting number
 * @max: the ending number
 * Return: tha valur of the array
 */
int *array_range(int min, int max)
{
	int *array, i, j, range;

	range = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * range);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; j < range; i++, j++)
	{
		array[j] = i;
	}
	return (array);
}
