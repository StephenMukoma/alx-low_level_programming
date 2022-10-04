#include "main.h"
#include <stdlib.h>
/**
*argstostr -  concatenates all the arguments of your program.
*
*@ac: number of arguments
*@av: argument vector
*
*Return: concatenated string argument
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int m, a, length = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		a = 0;
		while (av[m][a] != '\0')
		{
			a++;
			length++;
		}
	}
	str = malloc(sizeof(char) * (length + ac + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		a = 0;
		while (av[m][a] != '\0')
		{
			str[c] = av[m][a];
			c++;
			a++;
		}
	str[c] = '\n';
	c++;
	}
	return (str);
}
