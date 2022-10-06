#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function that concatenates two strings.
*
*@s1: string one to be concatenated with string 2
*@s2: string two to be concatenated with string 1
*@n: number of bytes from s2 to be concatenated
*
*Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1length, s2length, m = 0, a;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1length = 0; *(s1 + s1length) != '\0'; s1length++)
	{
	}
	for (s2length = 0; *(s2 + s2length) != '\0'; s2length++)
	{
	}

	if (n >= s2length)
		n = s2length;

	concat = malloc(sizeof(char) * (s1length + n + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (a = 0; a < (s1length + n); a++)
	{
		if (a >= s1length)
		{
			concat[a] = s2[m];
			m++;
		}
		else if (a < s1length)
		{
			concat[a] = s1[a];
		}
	}
	concat[a] = '\0';
	return (concat);
}
