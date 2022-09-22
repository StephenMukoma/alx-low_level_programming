#include "main.h"
/**
*string_toupper - Convert string to uppercase
*
*@str: parameter string
*
*Return: uppercase string
*/
char *string_toupper(char *str)
{
	int s;

	for (s = 0; *(str + s) != '\0'; s++)
	{
		if (*(str + s) >= 'a' && *(str + s) <= 'z')
		{
			*(str + s) -= 32;
		}
	}
	return (str);
}
