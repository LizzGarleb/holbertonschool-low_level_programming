#include <stdio.h>
#include <unistd.h>
int main(void)
{
	/*
	 * Main - prints a string
	 * Return: return 1 (Pass)
	 *
	 */
	write(2, "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n", 62);
	return (1);
}
