#include <stdio.h>
/**
 *main - print numbers and fizzbuzz
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int FB;

	for (FB = 1; FB < 100; FB++)
	{
		if (FB == 100)
		{
			printf("Buzz");
		}
		else if (FB % 3 == 0 && FB % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (FB % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (FB % 3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
		printf("%d ", FB);
	}
	}
	printf("\n");
	return (0);
}
