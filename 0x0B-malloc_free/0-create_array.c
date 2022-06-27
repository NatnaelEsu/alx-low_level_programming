#include "main.h"
#include "stdlib.h"

/**
 * create_array - create a set of array
 * @size: input size of array
 * @c: default input
 *
 * Return: null if no memory allcation or fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (!size || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
