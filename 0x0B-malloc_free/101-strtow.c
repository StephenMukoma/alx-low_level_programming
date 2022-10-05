#include "main.h"
#include <stdlib.h>
/**
* word_len - finds lenght of word
*
* @str: The string to be searched.
*
* Return: word length
*/
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
* count_words - Counts the number of words.
* @str: The string to be searched.
*
* Return: The number of words
*/
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}

	return (words);
}

/**
* strtow - Splits a string into words.
*
* @str: The string to be split.
*
* Return: pointer to an array of strings (words).
*/
char **strtow(char *str)
{
	char **ptr;
	int i = 0, words, j, letters, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		ptr[j] = malloc(sizeof(char) * (letters + 1));

		if (ptr[j] == NULL)
		{
			for (; j >= 0; j--)
				free(ptr[j]);

			free(ptr);
			return (NULL);
		}

		for (k = 0; k < letters; k++)
			ptr[j][k] = str[i++];

		ptr[j][k] = '\0';
	}
	ptr[j] = NULL;

	return (ptr);
}
