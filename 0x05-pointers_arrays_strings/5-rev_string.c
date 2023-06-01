#include "main.h"
/**
 * rev_string - Our function that prints a string, in reverse
 * @s: Our character
 *
 * Return: A string in reverse
 */
void rev_string(char *s)
{
	int length;
	int i;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	end = length - 1;

    while (start < end)
    {
        // Swap characters
        temp = *(s + start);
        *(s + start) = *(s + end);
        *(s + end) = temp;

        // Move to the next characters
        start++;
        end--;
    }
}

	_putchar('\n');
	}
