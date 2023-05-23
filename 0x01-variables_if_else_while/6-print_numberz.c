#include <stdio.h>
/**
 * main - entry poing of our program
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
	putchar('\n');
	return (0);
}
