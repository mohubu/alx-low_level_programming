#include "main.h"
/**
 * print_numbers - our function that prints numbers in our program
 *
 * Return: counting numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
