#include "main.h"
/**
 * main - entry point of our program
 *
 * Description: Prints out alphabets in lowercase, followed by a newline
 *
 * Return: Always 0
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
