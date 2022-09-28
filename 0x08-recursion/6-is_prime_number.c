#include "main.h"
/**
*isprime - det if n is prime number
*
*@i: divisor
*@n: integer
*
*Return: 1 if prime else 0
*/
int isprime(int i, int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else if ((i > (n / 2)))
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (isprime(++i, n));
	}
}
/**
*is_prime_number - calls isprime
*
*@n: integer
*
*Return: 1 if prime else 0
*/
int is_prime_number(int n)
{
	return (isprime(2, n));
}
