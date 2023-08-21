#include "main.h"
/**
 * puts2 - this will print all even of a string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
