#include "main.h"
/**
 * _puts - our function that prints a string, followed by a new line
 * @str: our string
 *
 * Returns: A string
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}
