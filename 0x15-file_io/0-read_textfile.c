#include "main.h"

/**
*read_textfile - function that reads a text file and
*prints it to the POSIX standard output
*
*@filename: name of file being read
*@letters: number of letters it could read and print
*
*Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int c;
	size_t i = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	c = fgetc(fp);

	while (i < letters && c != EOF)
	{
		write(STDOUT_FILENO, &c, 1);
		c = fgetc(fp);
		i++;
	}

	fclose(fp);
	fp = NULL;
	return (i);


}
