#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: 0 if they are the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
