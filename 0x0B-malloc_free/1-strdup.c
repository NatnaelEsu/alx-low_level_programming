#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of the string
 * @str: cp of string
 *
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	for (len++; len--;)
	{
		dup[len] = *--str;
	}
}
