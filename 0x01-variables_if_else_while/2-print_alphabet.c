#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point of our program that prints alphabets
 *
 * Description: Prints alphabets in lower case
 *
 * Return: Always 0 (success)
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
