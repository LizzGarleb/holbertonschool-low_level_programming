#include <stdio.h>
/**
 * main - Prints all signle digit numbers of base 10 starting from 0, followed by a new line.
 * Return: return 0 sucess
 */
int main(void)
{
	int war;

	for (war = '0'; war <= '9'; war++)
	{
		putchar(war);
	}
	putchar('\n');
	return (0);
}
