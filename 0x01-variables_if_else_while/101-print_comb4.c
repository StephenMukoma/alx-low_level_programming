#include <stdio.h>
/**
 * main - print different combination of 3
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			for  (num3 = num2 + 1; num3 < 58; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 == 55)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
