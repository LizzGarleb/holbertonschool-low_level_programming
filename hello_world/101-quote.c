#include <stdio.h>
#include <unistd.h>
/**
* main - prints a string
* Return: return 1 (Pass)
*
*/

int main(void)
{
	write(2, "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n", 9);
	return (1);
}
