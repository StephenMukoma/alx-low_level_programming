#include "main.h"
/**
*_print_rev_recursion - Prints string in reverse
*
*@s: pointer to ist character in string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
