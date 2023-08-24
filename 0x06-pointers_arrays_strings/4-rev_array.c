#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int size = n - 1;

	i = 0;

	while (a[i] < size)
	{
		int s = a[i];

		a[i] = a[size];
		a[size] = s;

		i++;
		size--;
	}
}
