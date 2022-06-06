#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{

	int i = '0';
	int j = '0';

	for (i = '0'; i <= '9'; i++)
	{

		for (j = '0'; j <= '9'; j++)
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
					putchar('\n');
				}

				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
