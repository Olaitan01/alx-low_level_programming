#include "main.h"

/**
 * print_sign - prints arithmetic sign
 *
 * @n: checks for number
 * Return: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
