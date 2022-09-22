#include "main.h"
/**
*leet - encode a string into 1337
*
*@str:
*
*Return: encode string
*/
char *leet(char *str)
{
	int s, t;

	char arr[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (s = 0; str[s] != '\0'; s++)
	{
		for (t = 0; t < 10; t++)
		{
			if (str[s] == let[t])
			{
				str[s] = arr[t];
			}
		}
	}
	return (str);
}

