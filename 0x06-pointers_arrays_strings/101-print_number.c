#include "main.h"
/**
*print_number - print int
*
*@n: parameter int
*
*/
void print_number(int n)
{
	unsigned int div, temp, temp1;

	if (n < 0)
	{
		temp = -n;
		_putchar(45);
	}
	else
	{
		temp = n;
	}

	div = 1;
	temp1 = temp;

	while (temp1 > 9)
	{
		temp1 /= 10;
		div *= 10;
	}

	while (div >= 1)
	{
		_putchar(((temp / div) % 10) + 48);
		div /= 10;
	}
}
