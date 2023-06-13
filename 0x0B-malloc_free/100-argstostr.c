#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* Account for the newline character */
	}

	str = malloc((total_len + 1) * sizeof(char)); /* Allocate memory for the concatenated string */

	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[index] = av[i][len];
			len++;
			index++;
		}
		str[index] = '\n'; /* Add newline character after each argument */
		index++;
	}

	str[index] = '\0'; /* Add null terminator at the end of the string */

	return (str);
}

