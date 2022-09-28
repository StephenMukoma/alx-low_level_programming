#include "main.h"
/**
*_pow_recursion - calculate power
*
*@x: parameter integer
*@y: power to raise
*
*Return: x power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, --y));
	}
}
