#include "main.h"
/**
 * print_line - straightline
 *
 * @n: parameter no of times output
 */
void print_line(int n)
{
	int count, D;

	D = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar(D);
		}
	_putchar('\n');
	}

}
