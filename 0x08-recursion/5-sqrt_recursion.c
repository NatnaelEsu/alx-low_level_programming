#include "main.h"

/**
 * do_sqrt_fun - do sqrt of number
 * @n: input number
 * @r: iteration number
 * Return: sqrt
 */

int do_sqrt_fun(int n, int r)
{
	if (r * r == 0)
	{
		return (r);
	}

	else if (r * r > n)
	{
		return (-1);
	}

	return (do_sqrt_fun(n, r + 1));
}

/**
 * _sqrt_recursion - find sqrt of a number
 * @n: number the sqrt t0 be found
 * Return: -1 if no or sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (do_sqrt_fun(n, 0));
}
