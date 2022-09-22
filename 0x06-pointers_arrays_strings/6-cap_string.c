#include "main.h"
/**
*cap_string - Capitalizes string
*
*@str: parameter string
*
*Return: capitalized string
*/
char *cap_string(char *str)
{
	int c;

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	for (c = 1; *(str + c) != '\0'; c++)
	{
		if (*(str + (c - 1)) == ' ' ||
		*(str + (c - 1)) == '\t' ||
		*(str + (c - 1)) == '\n' ||
		*(str + (c - 1)) == ',' ||
		*(str + (c - 1)) == ';' ||
		*(str + (c - 1)) == '.' ||
		*(str + (c - 1)) == '!' ||
		*(str + (c - 1)) == '?' ||
		*(str + (c - 1)) == '"' ||
		*(str + (c - 1)) == '(' ||
		*(str + (c - 1)) == ')' ||
		*(str + (c - 1)) == '{' ||
		*(str + (c - 1)) == '}')
		{
			if (*(str + c) >= 'a' && *(str + c) <= 'z')
			{
				*(str + c) -= 32;
			}
		}
		else
		{
		}

	}
	return (str);
}
