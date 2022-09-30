#include "main.h"
/**
*_strncat - concatenate string
*
*@dest: parameter string
*
*@src: parameter string
*
*@n: number of bytes
*
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int s, t, count;

	count = 0;

	for (s = 0; *(dest + s) != '\0'; s++)
	{
	}

	for (t = 0; count < n && *(src + t) != '\0'; t++)
	{
		count++;
		*(dest + s) = *(src + t);
		s++;
	}
	return (dest);
}
