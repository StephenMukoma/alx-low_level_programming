#include "main.h"
#include <stdlib.h>
/**
*_realloc - function that reallocates a memory block using malloc and free
*
*@ptr:pointer to the memory previously allocated
*@old_size: size of ptr
*@new_size: new memory size
*
*Return: pointer to new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt2;
	char *tem1 = ptr, *tem2;
	unsigned int m;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		pt2 = malloc(new_size);

		if (pt2 == NULL)
			return (NULL);

		return (pt2);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pt2 = malloc(sizeof(*tem1) * new_size);

	if (pt2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	tem2 = pt2;
	for (m = 0; m < new_size && m < old_size; m++)
	{
		tem2[m] = tem1[m];
	}
	free(ptr);
	return (pt2);
}
