#include "main.h"
/**
 * _abs - Computes the absolute value of an interger.
 * @n: this is parameter
 * Return: Return a absolute value negative, otherwise return b absolute value positive.
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
