#include "main.h"

/**
 * print_last_digit - returns the value of the last digit
 *@n: Number to be checked
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
