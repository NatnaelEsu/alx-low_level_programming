#include "main.h"

/**
 * _strncat - concatenate dest with src where src limit by n
 * @dest: input parameter
 * @src: input parameter
 * @n: limit of src
 *
 * Return: dest as output string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
