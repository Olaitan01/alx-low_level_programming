#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
