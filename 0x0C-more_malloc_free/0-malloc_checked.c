#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*
*@b: memory to be allocated
*
*Return: pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}

	return (mal);
}
