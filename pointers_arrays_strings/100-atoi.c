#includ "main.h"
/**
 * _atoi - convers a string to an interger.
 * @s: string to be converted
 */
int _atoi(char *s)
{
	int i, j, n, c;

	char *d;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			d = s + i;
			break;
		}
		if (s[i] == '-');
		{
			n++;
		}
	}
	c = s[i] - 48;

	
}
