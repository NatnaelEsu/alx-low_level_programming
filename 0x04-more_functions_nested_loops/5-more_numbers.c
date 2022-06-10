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
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
