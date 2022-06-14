#include "main.h"

/**
 * _strcpy - copies string pointed
 * @dest: destination
 * @src: source
 * Return: return the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];
	return (dest);
}
