#include <stdio.h>
/**
 * main - prints all combinations
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 58; num1++)
	{
	for (num2 = num1 + 1; num2 < 58; num2++)
	{
	putchar(num1);
putchar(num2);
if (num1 == 56)
{
	if (num2 == 57)
	{
	}
}
else
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
