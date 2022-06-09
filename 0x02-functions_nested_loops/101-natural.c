#include <stdio.h>

/**
 * main - Entry point of a program
 *
 * Return: Always 0(True)
 */

int main(void)
{
	int k = 0;
	int n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			k = k + n;
		}

		n++;
	}

	printf("%d\n", k);
	return (0);
}
