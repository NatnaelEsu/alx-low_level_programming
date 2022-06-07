#include <stdio.h>
#include "main.h"

/**
 * _islower - to check a character for lowercase
 * @c: the variable that needs to be checked
 *
 * Return: 1 if True 0 for false
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
