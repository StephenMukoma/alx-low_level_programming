#include "main.h"
/**
*_memcpy - copies memory area
*
*@dest: buffer that is copied to
*@src: buffer to copy
*@n: no of bytes
*
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
