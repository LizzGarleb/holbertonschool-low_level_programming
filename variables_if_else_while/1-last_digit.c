#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints a string
* Return: return (0) Passed
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %i and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i and is 0\n", n);
	}
	else if	(n % 10 < 6)
	{
		printf("Last digit of %i and is less than 6 and not 0\n", n);
	}
	return (0);
}
