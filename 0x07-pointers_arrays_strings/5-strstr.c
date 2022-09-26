#include "main.h"
/**
*_strstr - function that finds occurrence of string
*
*@haystack: string
*@needle: substring
*
*Return: pointer
*/
char *_strstr(char *haystack, char *needle);
{
	int s, t, r, length, count;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	if (length == 0)
	{
		return (haystack);
	}

	for (t = 0; haystack[t] != '\0'; t++)
	{
		s = 0;
		if (haystack[t] == needle[s])
		{
			k = t;
			for (count = 0; count < length; count++)
			{
				if (haystack[r] != needle[s])
				{
					break;
				}
				r++;
				s++;
			}
		}
		if (count == length)
		{
			break;
		}
	}
	if (*(haystack + t) != '\0')
	{
		return (haystack + t);
	}
	else
	{
		return ('\0');
	}

}
