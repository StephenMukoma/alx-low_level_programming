#include "main.h"
/**
 * print_times_table - print n times table
 *
 * @n: parameter integer
 */
void print_times_table(int n)
{
	int count, CI, num, out, ref;

	CI = 0;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (count = 0; count <= n; count++)
		{
			_putchar(48);
			for (num = 0; num < n; num++)
			{
			_putchar(',');
			_putchar(32);
			ref = count;
			out = ref + (CI * num);
			if (out <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(out + 48);
			}
			else if (out <= 99)
			{
				_putchar(32);
				_putchar((out / 10) + 48);
				_putchar((out % 10) + 48);
			}
			else
			{
				_putchar((out / 100) + 48);
				_putchar(((out % 100) / 10) + 48);
				_putchar((out % 10) + 48);
			}
		}
		CI = CI + 1;
		_putchar('\n');
	}
}
