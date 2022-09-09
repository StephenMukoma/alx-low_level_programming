#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowrider;

	for (lowrider = 'a'; lowrider <= 'z'; lowrider++)
	{
		putchar(lowrider);
	}
	putchar('\n');
	return (0);
}
