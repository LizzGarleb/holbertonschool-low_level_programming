#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: Return void (no return)
 */
int main(void)
{
	int rawr;

	for (rawr = 0; rawr <= 9; rawr++)
	{
		printf("%d", rawr);
	}
	putchar('\n');
	return (0);
}
