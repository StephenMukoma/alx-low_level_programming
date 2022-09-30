#include "main.h"
/**
*_atoi - string to int
*
*@s: parameter pointer t string
*
*Return: interger from string
*/
int _atoi(char *s)
{
	unsigned int num = 0, n, p;
	int sign = 1;

	for (n = 0; *(s + n) != '\n'; n++)
	{
	}
	for (p = 0; p < n; p++)
	{
		if (s[p] == '-')
			sign *= -1;

		else if (s[p] >= '0' && s[p] <= '9')
		num = num * 10 + (s[p] - 48);

		else if (num > 0)
			break;
	}
	return (num * sign);
}
