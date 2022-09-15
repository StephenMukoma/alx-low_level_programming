#include "main.h"
/**
 *print_number - print an int
 *
 *@n: parameter integer
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int num, P, count;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	P = num;
	count = 1;

	while (P > 9)
	{
		P /= 10;
		count = count * 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}

