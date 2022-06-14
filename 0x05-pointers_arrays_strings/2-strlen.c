#include "main.h"

/**
 * _strlen - prototype which return strlen
 * @s: input character
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}

	return (i);
}
