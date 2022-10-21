#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: string to convert
 * Return: return r if negative, return sum if positive.
 */
int _atoi(char *s)
{
	int i, j, n, convert, mul, sum, r;

	char *d, *a;

	n = 0;
	mul = 1;
	convert = 0;
	sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			n++;
		}
		if (s[i] > 47 && s[i] < 58)
		{
			d = s + i;
			break;
		}
	}

	for (j = 0; d[j] != '\0'; j++)
	{
		if (d[j] < 48 || d[j] > 57)
		{
			d[j] = '\0';
			break;
		}
	}
	a = d + (j - 1);

	while (a != d - 1)
	{
		convert = *a - 48;
		sum += convert * mul;
		mul = mul * 10;
		a--;
	}

	if (!n % 2 == 0)
	{
		r = sum * -1;
		return (r);
	}

	return (sum);
}
