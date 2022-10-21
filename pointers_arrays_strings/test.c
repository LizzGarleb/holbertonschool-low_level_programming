#include <stdio.h>
int main()
{
	int i, j, n, c, m, t;
	
	char *d, *a;

	char s[]="hel,-----+567jovnao ----6969s";

	n = 0;
	m = 1;
	c = 0;
	t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
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
		c = *a - 48;
		t += c * m;
		m = m * 10;
		a--;
	}
	printf("%d\n", c);
	return (0);
}
