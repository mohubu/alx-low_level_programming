#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer in our program.
 *@c: Our integer value
 *
 *Return: the absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		c = (c * (-1));
		return (c);
	}
}
