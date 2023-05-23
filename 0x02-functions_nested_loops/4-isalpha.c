#include "main.h"
/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if it is an alphabetic character, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
