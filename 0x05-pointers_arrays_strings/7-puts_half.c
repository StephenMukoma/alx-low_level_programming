#include "main.h"
/**
*puts_half - print half string
*
*@str: parameter string
*/
void puts_half(char *str)
{
	int length_of_the_string, p;

	length_of_the_string = 0;

	for (; *(str + length_of_the_string) != '\0'; length_of_the_string++)
	{
	}

	if (length_of_the_string % 2 == 0)
	{
		p = length_of_the_string / 2;
		for (; p < length_of_the_string; p++)
		{
			_putchar(*(str + p));
		}
	}
	else
	{
		p = (length_of_the_string - 1) / 2;
		p += 1;
		for (; p < length_of_the_string; p++)
		{
			_putchar(*(str + p));
		}
	}
	_putchar('\n');
}

