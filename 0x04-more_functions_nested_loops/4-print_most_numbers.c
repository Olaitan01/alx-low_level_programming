#include "main.h"

/**
 * print_most_numbers - prints numbers range from 1-9 except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
