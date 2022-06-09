#include <stdio.h>
#include "main.h"

/**
 * print_times_table - absolute value of an integer
 * @n: parameter for the time table
 * Return: return the multiplication table
 */

void print_times_table(int n)
{
	int a;
	int b;
	int mul;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			mul = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}

			else if (mul < 10 && b != 0)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}

			else
			{
				_putchar(mul + '0');
			}

		}

		putchar('\n');
	}
}
