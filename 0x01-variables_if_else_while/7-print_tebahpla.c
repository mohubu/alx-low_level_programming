#include <stdio.h>
/**
 * main - entry point of our program
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 26; i++)
	{
		n = 122 - i;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
