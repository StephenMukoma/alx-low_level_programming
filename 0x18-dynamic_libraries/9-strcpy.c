#include "main.h"
/**
*_strcpy - copy string
*
*@dest: buffer
*
*@src:parameter string
*
*Return: buffer dest
*/
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; *(src + p) != '\0'; p++)
	{
		*(dest + p) = *(src + p);
	}
	*(dest + p) = *(src + p);
	return (dest);
}
