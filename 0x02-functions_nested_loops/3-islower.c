#include "main.h"

/**
 * _islower - checks for lowercase char
 * @a: The character to be checked
 * Return: If lowercase return 1 else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
