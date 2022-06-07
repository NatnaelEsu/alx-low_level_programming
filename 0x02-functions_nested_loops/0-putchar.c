#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i < strlen(ch); i++)
	{
		putchar(ch[i]);
	}

	putchar('\n');
	return (0);
}
