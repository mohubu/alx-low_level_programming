#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listin_s - Singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
int _putchar(char c);

#endif
