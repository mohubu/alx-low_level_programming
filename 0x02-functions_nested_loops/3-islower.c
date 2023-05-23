#include "main.h"
/*
 * _islower - Checks for lowercase character in our program
 * @c: character to be inspected
 *
 * Return: 1 if successful or 0 if uppercase
 */
int _islower(int c)	/* Our Function definition */
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
