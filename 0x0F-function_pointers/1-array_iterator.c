#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - function that executes a function given as a parameter
*on each element of an array
*
*@array: parameter array
*@action: parameter pointer to function
*@size: parameter size of array
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int fp;

	if (array && action != NULL)
	{
		for (fp = 0; fp < size; fp++)
		{
			(action) (array[fp]);
		}
	}
}
