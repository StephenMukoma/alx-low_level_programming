#include "main.h"
/**
 *more_numbers - 10 x 1-14
 *
 * Return: Always 0 Success
 */
void more_numbers(void)
{
	int count, num1, num2;

	for (count = 0 ; count < 10; count++)
	{

	for (num1 = 48; num1 < 50; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			if (num1 > 48 && num2 > 52)
			{
				break;
			}
			if (num1 > 48)
			{
				_putchar(num1);
			}
			_putchar(num2);
		}
	}
	_putchar('\n');
	}
}
