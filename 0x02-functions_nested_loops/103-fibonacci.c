#include "main.h"
#include <stdio.h>
/**
*main - print sum even- valued terms
*
* Return: 0 (success)
*/
int main(void)
{
	int P, C, N, T, R;

	P = 1;
	C = 2;
	N = P + C;
	R = 4000000;
	T = 2;

	for (; N <= R;)
	{
		N = P + C;
		if ((N % 2) == 0)
		{
			T = T + N;
		}
		P = C;
		C = N;
	}
	printf("%d", T);
	printf("\n");
	return (0);
}
