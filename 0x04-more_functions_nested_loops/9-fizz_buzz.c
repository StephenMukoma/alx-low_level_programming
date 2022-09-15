#include <stdio.h>
/**
 *fizz_buzz - print numbers and fizzbuzz
 *
 *@FB: parameter divisible 3,5
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int FB;

	for (FB = 1; FB <= 100; FB++)
	{
	if (FB % 3 == 0 && FB % 5 == 0)
	{
		printf("Fizz ");
	}
	else if (FB % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (FB % 3 == 0)
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%d ", FB);
	}
	}
	printf("\n");
	return (0);
}
