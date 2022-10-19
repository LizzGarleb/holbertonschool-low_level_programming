#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: Counts the arguments
 * @argv: string that store the arguments
 * Return: return 0 if passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
