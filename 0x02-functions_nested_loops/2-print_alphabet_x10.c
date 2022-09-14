#include "main.h"
/**
 *print_alphabet_x10 - print 10 times lower alphabet
 */
void print_alphabet_x10(void)
{
	char lowrider;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (lowrider = 'a'; lowrider <= 'z'; lowrider++)
		{
			_putchar(lowrider);
		}
		_putchar('\n');
	}

}

