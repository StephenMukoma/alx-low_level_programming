#include "main.h"

/**
*append_text_to_file - function that appends text
*
*@filename: name of the file
*@text_content: content to be appended
*
*Return: 1 (success) 
*/
int append_text_to_file(const char *filename, char *text_content)
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

	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}

	while (text_content[c] != '\0')
	{
		putc(text_content[c], fp);
		c++;
	}

	fclose(fp);
	return (1);
}
