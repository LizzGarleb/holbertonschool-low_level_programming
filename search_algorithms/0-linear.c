#include "search_algm.h"
/**
 * @array: is a pointer to the first element of the array
 * @size: is the number if elements in array
 * @ value: is the value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	for (i = 0; i < size; i++)
		if (array[i] == value)
			return i;
	return -1;
}
