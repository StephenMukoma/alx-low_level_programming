#include "main.h"
/**
 *more_numbers - 10 x 1-14
 *
 * Return: Always 0 Success
 */
void more_numbers(void)
{
	int count, num1, num2, num3;

	for (count = 0 ; count < 10; count++)
	{

	for (num1 = 48; num1 <= 57; num1++)
	{
		_putchar(num1);
	}
	num2 = 49;
		for (num3 = 48; num3 <= 52; num3++)
		{
			_putchar(num2);
			_putchar(num3);
		}
	_putchar('\n');
	}
}
