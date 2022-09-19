#include "main.h"
/**
*print_rev - print reverse
*
*@s: parameter string
*/
void print_rev(char *s)
{
	int length, p;

	for (length = 0; *(s + length) != '\n'; length++)
	{
	}

	for (p = (length - 1); p >= 0; p++)
	{
		_putchar(*(s + p));
	}
	_putchar('\n');
}
