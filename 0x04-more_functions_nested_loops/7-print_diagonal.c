#include "main.h"
/**
 *print_diagonal - diagonal lines
 *
 * @n: parameter baclslash
 *
 * Return: Always (0) Success
 */
void print_diagonal(int n)
{
	int count1, count2, back;

	back = 92;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (count1 = 0; count1 < n; count1++)
			{
				for (count2 = 0; count2 < (count1 - 1); count2++)
				{
					_putchar(' ');
				}
				_putchar(back);
				_putchar('\n');
			}
		}
}
