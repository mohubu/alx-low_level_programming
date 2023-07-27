#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees each node of the linked list, including the strings.
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        /* Store the next pointer in a temporary variable */
        temp = head->next;

        /* Free the string allocated by strdup */
        free(head->str);

        /* Free the current node */
        free(head);

        /* Move to the next node */
        head = temp;
    }
}

