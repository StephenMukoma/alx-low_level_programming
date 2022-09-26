#include "main.h"
/**
*_memset - fill the first n bytes
*
*@s: buffer
*@b: byte
*@n: no of bytes
*
*Return: buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}

