#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0(True)
 */

void print_alphabet(void)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
