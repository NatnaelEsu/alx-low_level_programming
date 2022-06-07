#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value of an integer
 * @r: the input that is going to be checked
 *
 * Return: return the absolute value of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}

	else
	{
		return (r);
	}

}
