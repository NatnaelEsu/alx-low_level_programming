#include "main.h"

/**
 * swap_int - exchange the value of the variable
 * @a: first variable to be entered
 * @b: second variable to be entered
 * Return: value of a and b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
