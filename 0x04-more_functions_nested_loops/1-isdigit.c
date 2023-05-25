#include "main.h"
/**
 * _isdigit - Our function that checks for a digit in our program
 * @n: The character to be checked
 *
 * Return: 1 if n is a digit and 0 otherwise
 */
int _isdigit(int n)
{
	if (n <= 58 && n >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
