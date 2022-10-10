#include "main.h"
/**
 * swap_int - Swap the value of two intergers
 * @a: Interger vale
 * @b: Interger value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
