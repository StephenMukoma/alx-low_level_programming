#include "main.h"
#include <stdio.h>
/**
 * main - Sum of multiples of 3 or 5
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int total, R, num;

	R = 1024;
	total = 0;

	for (num = 0; num < R; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			total = total + num;
		}
	}
	printf("%d\n", total);
	return (0);

}
