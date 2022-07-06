#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: input string
 * @f: the printing function of pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
