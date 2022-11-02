#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the result
 * @argc: count of argument
 * @argv: array of argument
 */
int main(int argc, char *argv[])
{
	int one, two, a;
	int (*p)(int, int);
	char *ope;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	one = atoi(argv[1]);
	two = atoi(argv[3]);
	ope = argv[2];

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ope == '/' && two == 0) || (*ope == '%' && two == 0))
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(ope);
	a = p(one, two);

	printf("%d\n", a);
	return (0);
}
