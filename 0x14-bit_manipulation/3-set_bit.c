#include "main.h"
/**
*set_bit - function that sets the value of a bit to 1 at a given index
*
*@n: pointer to value
*
*@index: index starting from 0 of the bit you want to set
*
*Return: 1 success, else -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
