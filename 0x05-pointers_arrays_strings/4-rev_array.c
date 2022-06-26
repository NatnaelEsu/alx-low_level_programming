#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: input array
 * @n: number of element
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
