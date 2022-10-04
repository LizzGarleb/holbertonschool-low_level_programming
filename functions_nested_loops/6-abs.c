#include "main.h"
/**
 * _abs - Computes the absolute value of an interger.
 * Return:
 */
int _abs(int n)
{
	int a, b;

	a = (n * (-1));
	b = n;

	if (n < 0)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
