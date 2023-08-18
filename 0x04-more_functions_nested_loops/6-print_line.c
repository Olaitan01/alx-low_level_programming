#include "main.h"
#include <stdio.h>

/**
 * print_line - prints out lines
 * @n: n is the number of times thhe character should be printed
 * Return: Always 1
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

