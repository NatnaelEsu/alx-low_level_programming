#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - absolute value of an integer
 * @r: the input that is going to be checked
 *
 * Return: return the absolute value of r
 */

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
		r = r % 10;
		_putchar(r + '0');
	}

	else
	{
		r = r % 10;
		_putchar(r + '0');
	}

	return (r);
}
