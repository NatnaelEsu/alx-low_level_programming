#include "main.h"

/**
 * _puts_recursion - list string character
 * @s: input string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
