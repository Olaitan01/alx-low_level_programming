#include "main.h"
#include <stdio.h>

/**
 * _isupper - Returns 1 if c is uppercase and 0 otherwise
 *
 * @c: The character to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
