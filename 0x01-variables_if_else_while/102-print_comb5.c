#include <stdio.h>
/**
 * main - all possible combinations of 2 digit numbers.
 *
 * Return: 0 (success)
 */
int main(void)
{
int num1, num2, num3, num4, op1, op2;

num1 = num2 = num3 = num4 = 48;
while (num1 < 58)
{
num2 = 48;
while (num2 < 58)
{
num3 = 48;
while (num3 < 58)
{
num4 = 48;
while (num4 < 58)
{
op1 = (num1 * 10) + num2;
op2 = (num3 * 10) + num4;
if (op1 < op2)
{
putchar(num1);
putchar(num2);
putchar(' ');
putchar(num3);
putchar(num4);
if (num1 == 57 && num2 == 56 && num3 == 57 && num4 == 57)
break;
putchar(',');
putchar(' ');
}
num4++;
}
num3++;
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
