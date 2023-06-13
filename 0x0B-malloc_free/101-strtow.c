#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		/* Skip leading spaces */
		while (str[i] == ' ')
			i++;

		/* Count non-space characters as a word */
		if (str[i] != ' ' && str[i] != '\0')
		{
			count++;

			/* Skip the entire word */
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		/* Skip leading spaces */
		while (*str == ' ')
			str++;

		/* Find the length of the current word */
		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;

		/* Allocate memory for the word */
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		/* Copy the characters of the word */
		for (k = 0; k < len; k++)
		{
			words[i][k] = *str;
			str++;
		}
		words[i][k] = '\0'; /* Add null terminator to the word */
	}

	words[word_count] = NULL; /* Add null terminator to the end of the array */

	return (words);
}

