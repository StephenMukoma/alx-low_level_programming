#include "main.h"

unsigned long int _pow(unsigned long int base, int power);
/**
*_pow - raises base to a power
*
*@base:int to raise
*@power: power to raise
*
*Return: unsigned long int raised to  power
*/
unsigned long int _pow(unsigned long int base, int power)
{
	unsigned long int num = 1;

	if (power == 0)
	{
		return (1);
	}

	while (power > 0)
	{
		num *= base;
		power--;
	}

	return (num);
}


/**
*print_binary - function that prints binary representation of a number
*
*@n: number to be converted
*/

void print_binary(unsigned long int n)
{
	int power = 0;
	unsigned long int rem;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n >= _pow(2, power))
	{
		power++;
	}
	power--;
	rem = n;

	while (power >= 0)
	{
		if (rem >= _pow(2, power))
		{
			_putchar('1');
			rem = rem - _pow(2, power);
			power--;
		}
		else
		{
		_putchar('0');
		power--;
		}
	}
}
