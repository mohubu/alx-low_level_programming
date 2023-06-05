#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return s;
		s++;
	}

	return NULL;
}

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}

	if (c == '\0')
		return s;

	return NULL;
}

