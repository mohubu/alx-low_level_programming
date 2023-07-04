#include "lists.h"
/**
 * listint_len - Returns the number of eleents in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elemts in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
