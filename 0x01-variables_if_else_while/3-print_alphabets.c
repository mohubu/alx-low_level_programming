#include <stdio.h>
/*
 * main - Start point of our program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(65 + i);
	}
	putchar('\n');
	return (0);
}
