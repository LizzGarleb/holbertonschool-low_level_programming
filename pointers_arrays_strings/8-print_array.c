#include <stdio.h>
#include "main.h"
/**
 * print_array - elements of an arrat of intergers
 * @a: Array name
 * @n: number of elementes of the array to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == (n - 1))
		{
			printf("%d", a[b]);
		}
		else
		{
			printf("%d, ", a[b]);
		}
	}
	printf("\n");
}
