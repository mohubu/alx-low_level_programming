#include "main.h"
/**
 * print_alphabet - Prints out alphabets in lowercase, followed by a newline
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(97 + i);
	}
	_putchar('\n');
}
