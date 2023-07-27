#ifndef LISTS_H
#define LISTS_H

/* Structure for the linked list node */
typedef struct list_s {
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* LISTS_H */

