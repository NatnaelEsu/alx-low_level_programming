#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{
	unsigned long int i, j, k, n;

	i = 0;
	j = 1;
	n = 0;

	while (n < 50)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);

		if (n == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
		n++;
	}

	return (0);
}
