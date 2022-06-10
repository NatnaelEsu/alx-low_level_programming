#include "main.h"

/**
 * print_triangle - print a triangle with # pattern
 * @size: number of row and column
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}