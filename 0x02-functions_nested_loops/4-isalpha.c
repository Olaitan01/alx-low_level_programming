#include "main.h"

/**
 * _isalpha - returns 1 or 0 char is Lower or uppercase
 * @c: checks if lowercase or uppercase
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
