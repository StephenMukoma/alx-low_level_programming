#include "main.h"
/**
 *jack_bauer - 24hrs
 */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 48; num1 <= 50; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			if (num2 == 52 && num1 == 50)
			{
				break;
			}
			for (num3 = 48; num3 < 54; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
					_putchar(num1);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					_putchar('\n');
				}
			}
		}
	}
}
