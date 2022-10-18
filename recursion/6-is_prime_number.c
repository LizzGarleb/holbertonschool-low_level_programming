#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - find prime number
 * @n: given number
 * Return: prime function
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}

/**
 * prime - calculates de prime
 * @n: given number
 * @i: does the work
 * Return: 1 if n is prime, 0 if not
 */
int prime(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(i + 1, n));
}
