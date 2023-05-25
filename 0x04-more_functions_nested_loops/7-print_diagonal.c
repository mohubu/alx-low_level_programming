#include "main.h"
/**
 * print_diagonal - our function that draws a diagonal line in our program
 * @n: The length of the line
 *
 * Return: A diagonal line of length n
 */
void print_diagonal(int n)
{
	int i, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
