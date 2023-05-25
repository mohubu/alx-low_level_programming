#include "main.h"
/**
 * print_square - our function that prints a square
 * @size: the size of our square
 *
 * Return: a square of size size
 */
void print_square(int size)
{
	int i, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
