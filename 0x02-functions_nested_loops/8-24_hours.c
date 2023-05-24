#include "main.h"
/**
 * jack_bauer - our function that prints every minute of the day in our program
 *
 * Return: every minute of the hour
 */
void jack_bauer(void)
{
	int i, n;

	for (i = 0; i < 24; i++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
