#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (stc[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
