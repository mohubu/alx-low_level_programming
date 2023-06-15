#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memoery to allocate
 *
 * Return: Pointer to the allocated memory, otherwise 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return ptr;
}
