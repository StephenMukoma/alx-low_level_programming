#include "main.h"

/**
*binary_to_uint - converts a binary number to unsigned int
*
*@b: pointer to a string
*
*Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i;
	int power = 0, len;

	if (b == '\0')
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}
	len--;

	while (len >= 0)
	{
		if (b[len] == '1')
		{
			i = _pow(2, power);
			dec += i;
		}
		power++;
		len--;
	}

	return (dec);
}
