#include "main.h"
/**
 * print_most_numbers - our function that prints numbers in our program
 *
 * Return: counting numbers except 4 and 2
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
