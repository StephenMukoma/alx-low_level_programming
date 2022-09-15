#include "main.h"
/**
 *print_triangle - print triangle
 *
 *@size: parameter size of triangle
 *
 */
void print_triangle(int size)
{
	int count1, count2, count3;

	if (size > 0)
	{
		for (count1 = 1; count1 <= size; count1++)
		{
			for (count2 = 1; count2 <= (size - count1); count2++)
			{
				_putchar(' ');
			}
			for (count3 = 0; count3 <= (size - count2); count3++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}

}
