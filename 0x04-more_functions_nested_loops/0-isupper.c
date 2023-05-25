#include "main.h"
/**
 * _isupper - our function that checks for uppercase
 * @n: the character to be checked
 *
 * Return: The program returns 1 if uppercase and 0 otherwise
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
