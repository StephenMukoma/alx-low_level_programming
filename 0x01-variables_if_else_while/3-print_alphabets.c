#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowrider, uppercase;

	for (lowrider = 'a'; lowrider <= 'z'; lowrider++)
	{
		putchar(lowrider);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
