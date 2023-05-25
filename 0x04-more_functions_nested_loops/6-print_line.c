#include "main.h"
/**
 * print_line - our function that prints a straight line
 *@n: Input variable
 *
 * Return: A straight line which is n times in length
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
		if (n < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
