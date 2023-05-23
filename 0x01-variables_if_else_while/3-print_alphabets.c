#include <stdio.h>

/*
 * main - Start point of our program
 *
 * Description: Prints both lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	/* Print lowercase alphabet */
	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	 /* Print uppercase alphabet */
	for (i = 0; i < 26; i++)
	{
		putchar(65 + i);
	}
	putchar('\n');
	return (0);
}
