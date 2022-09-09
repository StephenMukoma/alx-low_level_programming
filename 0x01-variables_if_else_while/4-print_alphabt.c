#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowrider;

	for (lowrider = 'a'; lowrider <= 'z'; lowrider++)
	{
		if (lowrider == 'q' || lowrider == 'e')
		{
		}
		else
		{
			putchar(lowrider);
		}
	}
	putchar('\n');
	return (0);
}
