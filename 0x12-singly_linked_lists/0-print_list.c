#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    char len_digit;
    char *str;

    while (h != NULL)
    {
        str = h->str;
        len_digit = '0';

        if (str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar('\t');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            while (h->len > 0)
            {
                h->len /= 10;
                len_digit++;
            }

            h->len = len_digit;

            _putchar('[');
            while (h->len > '0')
            {
                _putchar(h->len);
                h->len--;
            }
            _putchar(']');
            _putchar('\t');

            while (*str)
            {
                _putchar(*str);
                str++;
            }
            _putchar('\n');
        }

        h = h->next;
        count++;
    }

    return count;
}
