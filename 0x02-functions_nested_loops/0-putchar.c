#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0(True)
 */

int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
