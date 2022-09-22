#include "main.h"
/**
*_strcmp - compare strings
*
*@s1: parameter string
*
*@s2: parameter string
*
*Return: difference btwn strings
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == s2;)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

