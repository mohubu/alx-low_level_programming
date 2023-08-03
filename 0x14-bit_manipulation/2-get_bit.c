#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number whose bit value is to be obtained.
 * @index: The index, starting from 0, of the bit to be retrieved.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
