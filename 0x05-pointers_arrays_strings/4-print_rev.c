#include "main.h"
/**
 * print_rev - Our function that prints a string, in reverse
 * @s: Our character
 *
 * Return: A string in reverse
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
