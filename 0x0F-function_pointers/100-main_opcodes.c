#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *array = (char *) main;
	int fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (fp = 0; fp < (atoi(argv[1])); fp++)
	{
		if (fp == (atoi(argv[1]) - 1))
		{
			printf("%02hhx\n", array[fp]);
			break;
		}
		printf("%02hhx ", array[fp]);
	}
	return (0);
}
