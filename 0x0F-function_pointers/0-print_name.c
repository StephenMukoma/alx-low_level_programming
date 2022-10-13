#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - prints a name
*
*@name: parameter character
*@f: parameter
*
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f)(name);
	}
}
