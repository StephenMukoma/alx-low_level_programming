#include <stdio.h>
#include "function_pointers.h"
/**
*int_index -  function that searches for an integer
*
*@array: parameter array
*@size: number of elements in the array
*@cmp: pointer to the function to be used to compare values
*
*Return: success index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int fp;

	if  (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (fp = 0; fp < size; fp++)
	{
		if ((*cmp) (array[fp]))
		{
			return (fp);
		}
	}
	return (-1);
}
