#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return NULL;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return NULL;

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return duplicate;
}
