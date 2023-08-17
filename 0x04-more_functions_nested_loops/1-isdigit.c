#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Returns 1 if c is digit and 0 if otherwise
 * @c: c is the integer to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
