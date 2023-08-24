#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 *
 *@str: pointer for the strings
 * Return: nothing.
 */

char *string_toupper(char *str)
{
	char *s = str;

	while (*str!= '\0')
	{
		if (*str >= 'a' && *str  <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (s);
}
