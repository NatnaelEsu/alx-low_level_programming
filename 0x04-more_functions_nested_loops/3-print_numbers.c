#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: digits
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
