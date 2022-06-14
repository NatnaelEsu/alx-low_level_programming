#include "main.h"

/**
 * puts2 - print every other character
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int l, i;

	for (l = 0; str[l]; l++)
		;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
