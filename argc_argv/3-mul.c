#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: counts the arguments
 * @argv: string that hold the arguments
 * Return: return 0 passed
 */
int main(int argc, char *argv[])
{
	int i, b, a;

	i = atoi(argv[1]);
	a = atoi(argv[2]);
	b = a * i;

	if (argc == 3)
	{
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
