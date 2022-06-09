#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print number from n to 98
 * @n: parameter to be printed
 *
 * Return: return the printed value of n
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}

			else
			{
				printf("%d, ", n);
			}

			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}

			else
			{
				printf("%d, ", n);
			}

			n--;
		}
	}
}
