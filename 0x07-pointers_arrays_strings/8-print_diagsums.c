#include "main.h"
/**
*print_diagsums - sum of two diagonals of square matrix
*
*@a: array matrix
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
	int r, y, dsum1, dsum2;

	dsum1 = 0;
	dsum2 = 0;

	for (r = 0; r < size; r++)
	{
		dsum1 += a[(size + 1) * r};
	}

	for (y = 0; y < size; y++)
	{
		dsum2 += a[(size - 1) * (y + 1)];
	}

	printf("%d, %d\n", dsum1, dsum2);
}
