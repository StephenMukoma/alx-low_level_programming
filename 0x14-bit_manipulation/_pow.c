#include "main.h"

/**
*_pow - raises base to power
*
*@base: int to raise
*@power: power to raise
*
*Return: Unsigned int raised to a power
*/
unsigned int _pow(unsigned int base, int power)
{
	unsigned int output = 1;

	if (power == 0)
	{
		return (1);
	}

	while (power > 0)
	{
		output *= base;
		power--;
	}
	return (output);
}
