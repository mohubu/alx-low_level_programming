#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @c: The integer to be used
 *
 * Return: The last digit
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
