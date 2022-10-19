#include <stdio.h>
/**
 * main - Print the number of arguments passed into it
 * @argc: Counts arguments
 * @argv: Holds the string
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
