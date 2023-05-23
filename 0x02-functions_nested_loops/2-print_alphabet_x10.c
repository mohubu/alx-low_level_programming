#include "main.h"
/**
 * print_alphabet_x10 - prints out 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(97 + n);
		}
		_putchar('\n');
	}
}
