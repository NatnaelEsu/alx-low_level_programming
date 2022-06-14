#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: character input
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char temp;

	for (i = 0; s[i]; i++)
		l++;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = temp;
	}
}
