#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints sum
*
*@argc: argument
*@argv: argument
*
*Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
	int a, r, sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (r = 0; argv[a][r] != '\0'; r++)
		{
			if (!isdigit(argv[a][r]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
