#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers.
*
*@min: minimum integer in range
*@max: maximum integer in range
*
*Return: array of integers
*/
int *array_range(int min, int max)
{
	int pt, m = 0;
	int *ar;

	if (min > max)
		return (NULL);

	pt = (max - min) + 1;

	ar = malloc(sizeof(int) * pt);

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (; min <= max; min++)
	{
		ar[m] = min;
		m++;
	}
	return (ar);
}
