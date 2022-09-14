#include "main.h"
#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int P, C, N;
	int count;

	P = 1;
	C = 2;
	N = P + C;

	printf("%ld, %ld", P, C);

	for (count = 2; count < 50; count++)
	{
		N = P + C;
		printf(", %ld", N);
		P = C;
		C = N;
	}
	printf("\n");
	return (0);
}
