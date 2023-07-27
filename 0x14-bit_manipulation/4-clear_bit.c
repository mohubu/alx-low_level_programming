#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number containing the bit.
 * @index: The index of the bit (starting from 0) to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Validate the index is within the range of the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a bitmask with 1 at the given index and all other bits as 0 */
	unsigned long int mask = 1UL << index;

	/* Use bitwise NOT to invert the bitmask, then AND it with the number to clear the bit at the given index */
	*n &= ~mask;

	return (1);
}
