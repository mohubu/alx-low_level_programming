#include "main.h"
/**
 * more_numbers - pur function that prints 10 times the counting numbers
 *
 * Return: 10 times the couting numbers of 0 to 9
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
