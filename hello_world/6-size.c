#include <stdio.h>
/**
 * main - print string
 *
 * Return: return 0 sucess
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long intTypeLong;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(intTypeLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
