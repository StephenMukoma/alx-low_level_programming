#include <stdio.h>
/**
 * main - print number 0 to 9 separate commas
 *
 * Return: 0 (suceess)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
if (num != 57)
		{
putchar(',');
putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
