#include "main.h"
/**
 * puts_half - prints the remaining of a string
 * @str: the string input
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;
	int h, i;

	while (str[l] != '\0')
	{
		l++;
	}
	h = (l - 1) / 2;
	for (i = (h + 1); i < l; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
