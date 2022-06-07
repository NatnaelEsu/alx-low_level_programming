#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 True
 */

int main(void)
{
	int print_sign(int n);
	return (0);
}

/**
 * print_sign - check if it is a letter
 * @n: the input that is going to be checked
 *
 * Return: 1 if it is a letter or 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
