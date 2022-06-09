#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{
	unsigned long int n, i, j, k, sum;

	i = 0;
	j = 1;
	sum = 0;

	while (n < 50)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0 && k < 4000000)
		{
			sum = sum + k;
		}
	}

	printf("%lu\n", sum);
	return (0);
}
