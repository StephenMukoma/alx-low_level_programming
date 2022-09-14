#include "main.h"
/**
*print_last_digit - parameter
*
* @L: modulus
*
* Return: (lastlast)
*/
int print_last_digit(int L)
{
	int lastlast;

	lastlast = L % 10;

	if (lastlast >= 0)
	{
	_putchar (48 + lastlast);
	return (lastlast);
	}
	else
	{
	_putchar (-lastlast + 48);
	return (-lastlast);
	}
}
