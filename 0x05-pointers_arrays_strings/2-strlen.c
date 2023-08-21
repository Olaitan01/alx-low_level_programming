#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: The variable pointing to the strings address
 * Return: nothing
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
