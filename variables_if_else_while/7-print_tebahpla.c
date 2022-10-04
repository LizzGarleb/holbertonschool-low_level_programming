#include <stdio.h>
/**
 * main - print a string
 * Return: return 0 if successfull
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
