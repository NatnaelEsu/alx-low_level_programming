#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}