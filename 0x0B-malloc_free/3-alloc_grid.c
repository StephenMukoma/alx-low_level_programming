#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer
*to a 2 dimensional array of integers.
*
*@width: size of the inner array
*@height: size of outer array
*
*Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int m, a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		p[m] = malloc(sizeof(int) * width);

		if (p[m] == NULL)
		{
			for (m--; m >= 0; m--)
			{
				free(p[m]);
			}
			free(p);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (a = 0; a < width; a++)
		{
			p[m][a] = 0;
		}
	}
	return (p);
}
