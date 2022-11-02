#include "main.h"

/**
*create_file - function that creates a file
*
*@filename: name of file to create
*@text_content: content to write in file
*
*Return: Success (1)
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int c = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}

	chmod(filename, 0600);

	while (text_content[c] != '\0')
	{
		putc(text_content[c], fp);
		c++;
	}

	fclose(fp);
	return (1);

}
