#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: Pointer to the name string.
 * @f: Function pointer to the printing function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
