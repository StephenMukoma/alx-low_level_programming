#include "main.h"
#include <stdlib.h>
/**
*str_concat - function that concatenates two strings.
*
*@s1: string to append to
*@s2: string to be appended
*
*Return:concatenated string (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length1, length2, m, a = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length1 = 0; *(s1 + length1); length1++)
	{
	}
	for (length2 = 0; *(s2 + length2); length2++)
	{
	}
	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < (length1 + length2); m++)
	{
		if (m < length1)
		{
			*(concat + m) = *(s1 + m);
		}
		else
		{
			*(concat + m) = *(s2 + a);
			a++;
		}
	}
	*(concat + m) = '\0';
	s1 = concat;
	return (s1);
}
