#include <stdio.h>
/**
 * main - entry point of our program
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = 48 + i;
		putchar(n);
	}
	for (i = 0; i < 6; i++)
	{
		n = 97 + i;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
