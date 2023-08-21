#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer variable
 * @b: integer variable
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
