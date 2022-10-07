#include <stdio.h>
/**
 * main - The Fizz-Bizz test.
 * Return: Counting..
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a%15 == 0)
			printf ("FizzBuzz ");
		else if ((a%3) == 0)
			printf ("Fizz ");
		else if ((a%5) == 0)
			printf ("Buzz ");
		else
			printf("%d ", a);
	}
	return (0);
}
