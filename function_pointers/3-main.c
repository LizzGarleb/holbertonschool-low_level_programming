#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the result
 * @argc: count of argument
 * @argv: array of argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int one, two, a;
	int (*p)(int, int);
	char ope;
	char *sim;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	ope = argv[2][0];

	if ((ope != '*' && ope != '+' && ope != '-' && ope != '/') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	sim = argv[2];

	if ((*sim == '/' && two == 0) || (*sim == '%' && two == 0))
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(sim);
	a = (*p)(one, two);

	printf("%d\n", a);
	return (0);
}
