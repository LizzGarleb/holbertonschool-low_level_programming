#include <stdio.h>
/**
 * main - prints a string
 * Return: return (0) Passed
 * 
 * != no es igual / && and
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
