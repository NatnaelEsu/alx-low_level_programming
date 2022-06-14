#include "main.h"

/**
 * _puts - prints a character;
 * @str: the string that is going to be printed
 *
 * Return: notheing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
