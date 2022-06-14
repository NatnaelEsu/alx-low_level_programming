#include "main.h"

/**
 * puts_half - puts half of the character
 * @str: input string character
 * Return: void
 */

void puts_half(char *str)
{
	int i, l;

	for (l = 0; str[l]; l++)
		;

	for (i = l / 2 + (l % 2 ? 1 : 0); i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
