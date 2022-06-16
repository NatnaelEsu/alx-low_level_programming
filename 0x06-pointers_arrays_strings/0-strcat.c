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

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0')
	{
		dest[j + i] = src[i];
		j++;
	}
	return (dest);
}
