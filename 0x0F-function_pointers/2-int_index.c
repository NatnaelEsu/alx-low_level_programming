#include "function_pointers.h"

/**
 * int_index - search integer
 * @array: array
 * @size: size of array
 * @cmp: ponter function
 *
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
