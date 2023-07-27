#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    /* Create a variable with a specific pattern to check its byte order */
    unsigned int num = 1;

    /* Get the address of the variable */
    char *ptr = (char *)&num;

    /* If the value at the first byte (lowest address) is 1, it's little endian */
    return (*ptr);
}

