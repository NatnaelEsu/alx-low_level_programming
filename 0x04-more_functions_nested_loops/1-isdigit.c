#include "main.h"

/**
 * _isdigit - function that check if something is a digit
 * @c: digit to be checked
 *
 * Return: 1 0r 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
