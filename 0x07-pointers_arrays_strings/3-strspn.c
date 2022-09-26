#include "main.h"
/**
*strspn- function gets length of prefix substring.
*
*@s: parameter string
*
*@accept: characters that are acceptable
*
*Return: length of string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, t, r;
	int boolean;

	t = 0;
	count = 0;

	while (s[t] != '\0' && s[t] != ' ')
	{
		boolean = 1;
		for (r = 0; accept[r]; r++)
		{
			if (s[t] == accept[r])
			{
				boolean = 0;
				count++;
				break;
			}
		}
		if (boolean == 1)
		{
			break;
		}
		t++;
	}
	return (count);
}
