#include <stdio.h>
/**
 * main - Write a program that pritns its name,
 * followed by a new line.
 * @argc: Counts arguments
 * @argv: Hold the argument that were input
 * Return: return 0 if it was passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	printf("\n");
	return (0);
}
