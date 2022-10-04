#include <stdio.h>
/**
 * main - print a string
 * Return: return 0 sucessfull
 *
 */
int main(void)
{
	int corn;

	for (corn = '0' ; corn <= '9' ; corn++)
	{
		putchar(corn);

		if (corn != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
