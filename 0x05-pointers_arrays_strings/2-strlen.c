#include "main.h"
/**
*_strlen - lenght of string
*
*@s: parameter pointer
*
*Return: String lenght
*/
int _strlen(char *s)
{
	int length, p;

	length = 0;

	for (p = 0; *(s + 1) != '\0'; p++)
	{
		length++;
	}
	return (length);
}
