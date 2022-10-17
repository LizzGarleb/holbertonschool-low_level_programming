#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: given number
 * Return: return -1 if n is lower then 0, if n is equal to 0 print 1,
 * otherwise print the factorial number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
