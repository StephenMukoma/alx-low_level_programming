#include "main.h"
/**
*swap_int - swap integers
*
*@a: parameter int
*
*@b: parameter int
*/
void swap_int(int *a, int *b)
{
	int SW;

	SW = *b;
	*b = *a;
	*a = SW;
}

