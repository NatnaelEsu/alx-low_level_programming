#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: 0 True
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			_putchar(i + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
