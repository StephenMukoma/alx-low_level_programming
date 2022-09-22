#include "main.h"
/**
*_strncpy - copy string
*
*@dest: parameter string
*
*@src: parameter string
*
*@n: parameter string
*
*Return: Dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && *(src + s) != '\0'; s++)
	{
		*(dest + s) = *(src + s);
	}
	while (s < n)
	{
		*(dest + s) = '\0';
		s++;
	}
	return (dest);
}
