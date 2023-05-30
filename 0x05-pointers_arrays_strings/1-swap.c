#include "main.h"
/**
 * swap_int - ourfunction that swaps the values of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Swapped values
 */
void  swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
