#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s: The input to be print in reverse
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}

	for (i-- ; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
