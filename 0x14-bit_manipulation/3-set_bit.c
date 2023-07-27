#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit.
 * @index: The index of the bit (starting from 0) to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int set_bit(unsigned long int n, unsigned int index)
{
	/* Validate the index is within the range of the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Shift the number to the right 'index' times and check the least significant bit */
	return ((n >> index) & 1);
}
