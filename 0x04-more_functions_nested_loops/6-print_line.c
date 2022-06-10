#include "main.h"

/**
 * print_line - function print a line
 * @n: constant to make the line
 *
 * Return: line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
