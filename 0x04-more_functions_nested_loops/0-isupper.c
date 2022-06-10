#include "main.h"

/**
 * _isupper - function to check if it is uppercase or lowercase
 * @c: character input for the function
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
