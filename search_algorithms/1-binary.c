#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sortoed array of
 * intergers using the binary search algorithns
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located, if value is not present in array
 * or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (lo <= hi)
	{
		mid = lo + (hi - lo) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			printf("%d", array[i]);
			if (i < hi)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}
