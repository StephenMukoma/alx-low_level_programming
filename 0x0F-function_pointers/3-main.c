#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - calculation
*
*@argc: argument count
*@argv: argument vector
*
*Return: 0 success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	operator = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*operator != '+' && *operator != '-' && *operator != '*'
		&& *operator != '/' && *operator != '%') || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*operator == '/' && num2 == 0)
		|| (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
