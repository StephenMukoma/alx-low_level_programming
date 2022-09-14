#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural numbers
 *
 * @n: start point parameter
 */
void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num > 98; num--)
		{
			printf("%d, ", num);
		}
		printf("%d\n", 98);
	}
	else if (n < 98)
	{
		for (num = n; num < 98; num++)
		{
			prinf("%d, ", num);
		}
		printf("%d\n", 98);
	}
	else
	{
		print("%d\n", 98);
	}
}
