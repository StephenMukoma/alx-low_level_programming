#include "main.h"
/**
*_sqrt_recursion - Compute squareroot
*
*@i: integer
*@n: square
*
*Return: Squareroot of n
*/
int sqrtfnc(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrtfnc(++i, n));
	}
}
/**
*_sqrt_recursion - call sqrtfnc
*
*@n: square int
*
*Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
	return (sqrtfnc(1, n));
}
