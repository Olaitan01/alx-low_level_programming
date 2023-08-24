#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: variable of the first string
 * @s2: variable of the second string
 *
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s2 != *s1)
		{
			return (*s2 - *s1);
		}
		else
		{
			return (*s1 - *s1);
		}
		s1++;
		s2++;
	}
	return (0);
}
