#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers ranging from 0-9
 * Return: Always 0
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
