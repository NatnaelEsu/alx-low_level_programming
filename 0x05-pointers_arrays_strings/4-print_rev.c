#include "main.h"

/**
 * print_rev - reverse string print
 * @s: input string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
