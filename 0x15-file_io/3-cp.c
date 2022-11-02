#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*main - function that copies file content to another
*
*@ac: argument count
*@argv: argument vector
*
*Return: 1 (success)
*/
int main(int ac, char *argv[])
{
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "w");
	char *buffer;

	buffer = malloc(1024 * 1);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fp1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fp2 == NULL)
	{
		fclose(fp1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = fgets(buffer, 1024, fp1);
	while (buffer)
	{
		fprintf(fp2, "%s", buffer);
		buffer = fgets(buffer, 1024, fp1);
	}
	fclose(fp1);
	fclose(fp2);

	return (1);
}
