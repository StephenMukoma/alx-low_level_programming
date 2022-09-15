#include <stdio.h>
/**
 * main - print largest prime
 * Return: Always 0
 */
int main(void)
{
	long int R, optimusprime;

	R = 612852475143;

	for (optimusprime = 2; optimusprime <= R; optimusprime++)
	{
		if (R % optimusprime == 0)
		{
			R = R / optimusprime;
			optimusprime--;
		}
	}
	printf("%ls\n", optimusprime);
	return (0);
}
