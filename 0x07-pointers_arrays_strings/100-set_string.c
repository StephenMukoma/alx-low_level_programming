#include "main.h"
/**
*set_string - sets value of a pointer to a char
*
*@s: pointer to pointer
*@to: pointer to string
*/
void set_string(char **s, char *to)
{
	*s = to;
}
