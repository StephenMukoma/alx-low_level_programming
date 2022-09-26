#include "main.h"
/**
*_strpbrk - locate s
*
*@s:string to search
*@accept: parameter string
*
*Return: pointer to byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int boolean, t;

	boolean = 1;
	while (*s)
	{
		t = 0;
		while (*(accept + t))
		{
			if (*s == *(accept + t))
			{
				boolean = 0;
				break;
			}
			t++;
		}
		if (boolean == 0)
		{
			break;
		}
		s++;
	}
	if (*s != '\0')
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
