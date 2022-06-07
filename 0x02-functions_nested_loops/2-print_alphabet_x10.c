#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0(True)
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
