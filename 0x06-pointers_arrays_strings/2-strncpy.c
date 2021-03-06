#include "main.h"

/**
 * _strncpy - copy string
 * @dest: input parameter where string to be copied
 * @src: input parameter
 * @n: limit to a string that is going to be copied
 * Return: dest copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
