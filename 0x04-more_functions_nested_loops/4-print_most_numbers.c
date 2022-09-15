#include "main.h"
/**
 *print_most_numbers - print num not 2&4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
