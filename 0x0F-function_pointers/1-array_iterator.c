#include "function_pointers.h"

/**
 * array_iterator - iterate array
 * @array: input array
 * @size: array size
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
