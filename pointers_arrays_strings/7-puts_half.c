#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: giving string pointer
 */
void puts_half(char *str)
{
	int lenght, even, odd;
	
	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	if (lenght % 2 == 0)
	{
		for (even = lenght / 2; str[even] != '\0'; even++)
		{
			_putchar(str[even]);
		}
	} 
	else
	{
		for (odd = (lenght - 1) / 2; odd < lenght - 1; odd++)
		{
		       _putchar(str[odd + 1]);
		}
	}
	_putchar('\n');
}
