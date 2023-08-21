#include "main.h"

/**
 * _puts - prints to a string
 * @str: The string to print
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] <= '\0'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
