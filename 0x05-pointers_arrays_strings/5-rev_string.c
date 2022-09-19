#include "main.h"
/**
*rev_string - reverse a string
*
*@s: parameter string
*/
void rev_string(char *s)
{
	int length, count, p, st;
	char hold;

	for (length = 0; *(s + length) != '\0'; length++)
	{
	}

	st = length - 1;
	count = length;

	for (p = 0; p < length; p++)
	{
		if (count > 1)
		{
			hold = *(s + p);
			*(s + p) = *(s + st);
			*(s + st) = hold;
			st--;
			count -= 2;
		}
	}
}
