#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array of chars,
*and initializes it with a specific char.
*
*@size: size of array
*@c: character
*
*Return: pointer to array (success) else NULL
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int m;

	if (size == 0)
	{
		return ('\0');
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return ('\0');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			p[i] = c;
		}
		return (p);
	}
}
