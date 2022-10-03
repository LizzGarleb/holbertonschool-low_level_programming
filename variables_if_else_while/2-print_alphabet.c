#include <stdio.h>
/**
* main - prints a string
* Return: return (0) Passed
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
