#include <stdio.h>
/** 
 * main - Print all prossible diffferent combination of two digits.
 * Return: Return void.
 */
int main(void)
{
	int num, num2;
	for (num =  48; num <= 56; num ++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{

			if (num == 56 && num2 == 57)
			{
				putchar(num);
				putchar(num2);
				putchar(' ');
			}
			else
			{
				putchar(num);
				putchar(num2);
				putchar(',');int main(void)
{
        int num, num2;
        for (num =  48; num <= 56; num ++)
        {
                for (num2 = 49; num2 <= 57; num2++)
                {

                        if (num == 56 && num2 == 57)
                        {
                                putchar(num);
                                putchar(num2);
                                putchar(' ');
                        }
                        else
                        {
                                putchar(num);
                                putchar(num2);
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}

				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
