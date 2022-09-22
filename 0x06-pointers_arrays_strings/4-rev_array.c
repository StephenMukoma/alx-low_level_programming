#include "main.h"
/**
*reverse_array - reverse an array
*
*@a: parameter array
*
*@n: parameter int
*/
void reverse_array(int *a, int n)
{
	int y, r, count, temp;

	count = n;
	r = n - 1;
	for (y = 0; y < n; y++)
	{
		if (count > 1)
		{
			temp = *(a + y);
			*(a + y) = *(a + r);
			*(a + r) = temp;
			r--;
			count -= 2;
		}
		else
		{
			break;
		}
	}
}
