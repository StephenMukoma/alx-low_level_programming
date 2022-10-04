#include "main.h"
#include <stdlib.h>
/**
*_strdup -  returns a pointer to a newly allocated space in
*memory, which contains a copy of the string given as a parameter.
*
*@str: pointer
*
*Return: pointer to copied string (success) else NULL
*/
char *_strdup(char *str)
{
	int length, m;
	char *cc;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; *(str + length) != '\0'; length++)
	{
	}
	cc = malloc(sizeof(char) * (length + 1));

	if (cc == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < length; m++)
	{
		cc[m] = str[m];
	}
	return (cc);
}
