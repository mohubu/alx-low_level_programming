#include <stdio.h>
/*
 * main - entry point of our program function
 *
 * Description: Prints lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)		/* Our function */
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');
	return (0);
}
