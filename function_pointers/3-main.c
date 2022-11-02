#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the result
 * @argc: count of argument
 * @argv: array of argument
 */
int main(int argc, char *argv[])
{
	int one, two;
	char *ope;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	one = atoi(argv[1]);
	two = atoi(argv[3]);
	ope = atoi(argv[2]);

	if (get_op_func(ope) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ope == '/' && two == 0) || (*ope == '%' && two == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ope)(one, two);
	return (0);
}
