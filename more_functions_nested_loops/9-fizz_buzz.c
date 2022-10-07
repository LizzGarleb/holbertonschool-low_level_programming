#include <stdio.h>
/**
 *
 */
int num
for (num = 1; num <= 100; num++)
{
	if (num % 5 == 0)
	{
		printf("Fizz");
	}
	else if (num % 3 == 0)
	{
		printf("Buzz");
	}
	else if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz");
	}
	printf("%i\n", num);
	
}
