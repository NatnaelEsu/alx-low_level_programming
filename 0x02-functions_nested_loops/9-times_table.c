#include <stdio.h>
#include "main.h"

/**
 * times_table - absolute value of an integer
 *
 * Return: return the multiplication table
 */

void times_table(void)
{
	int a;
	int b;
	int mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;

			if (mul <= 9)
			{
				if (b != 0)
				{
					putchar(' ');
				}
				putchar(mul + '0');
			}

			else
			{
				putchar(mul / 10 + '0');
				putchar(mul % 10 + '0');
			}

			if (b != 9)
			{
				putchar(',');
				putchar(' ');
			}

			else
			{
				putchar('\n');
			}
		}
	}
}
