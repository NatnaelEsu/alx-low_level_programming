#include <stdio.h>
#include <main.h>

/**
 * main -Entry point
 *
 * Return: Always 0 True
 */

int main(void)
{
	int _isalpha(int c);
	return (0);
}

/**
 * _isalpha - check if it is a letter
 * @c: the input that is going to be checked
 *
 * Return: 1 if it is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
