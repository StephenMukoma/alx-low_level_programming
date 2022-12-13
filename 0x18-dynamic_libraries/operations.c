#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int mod(int a, int b);
int div(int a, int b);
/**
*add - adds two integers
*
*@a: integer 1
*@b: integer 2
*
*Return: sum of two integers
*/
int add(int a, int b)
{
	return (a + b);
}
/**
*sub - subtracts two integers
*
*@a: integer 1
*@b: integer 2
*
*Return: difference of two integers
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
*mul - multiplies two integers
*
*@a: integer 1
*@b: integer 2
*
*Return: multiplication of two integers
*/

int mul(int a, int b)
{
	return (a * b);
}
/**
*div - adds two integers
*
*@a: integer 1
*@b: integer 2
*
*Return: division of two integers
*/

int div(int a, int b)
{
	return (a / b);
}
/**
*mod - modulus two integers
*
*@a: integer 1
*@b: integer 2
*
*Return: modulus of two integers
*/

int mod(int a, int b)
{
	return (a % b);
}
