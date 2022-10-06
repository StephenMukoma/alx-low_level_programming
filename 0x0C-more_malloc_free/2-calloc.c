#include "main.h"
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array, using malloc.
*
*@nmemb: number of elements in the array
*@size: size of one array element
*
*Return: pointer to memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}

	for (m = 0; m < (nmemb * size); m++)
	{
		memory[m] = 0;
	}

	return (memory);
}
