#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Ture)
 *
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; i <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
