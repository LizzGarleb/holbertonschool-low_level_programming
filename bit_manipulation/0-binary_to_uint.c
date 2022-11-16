#include "main.h"
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the covnerted number, or 0 if there is one or more
 * char in the string b that is not 0 or 1, if b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (val);
}
