#include "main.h"
/**
*rot13 - encodes with rot13
*
*@str: parameter string
*
*Return: encode string
*/
char *rot13(char *str)
{
	int s, t;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (s = 0; *(str + s) != '\0'; s++)
	{
		for (t = 0; *(letters + t) != '\0'; t++)
		{
			if (*(str + s) == *(letters + t))
			{
				*(str + s) = *(rot13 + t);
				break;
			}
		}
	}
	return (str);
}

