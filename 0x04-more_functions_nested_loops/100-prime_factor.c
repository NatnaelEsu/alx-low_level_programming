#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num = num / i;
	}

	printf("%li\n", num);
	return (0);
}
