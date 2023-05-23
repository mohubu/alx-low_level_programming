#include <stdio.h>
/**
 * main - entry point of our program
 *
 * Return: Always 0
 */
int main(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		n = 48 + i;
		putchar(n);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
