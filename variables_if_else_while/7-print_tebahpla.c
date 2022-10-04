#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Return 0 when done.
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
