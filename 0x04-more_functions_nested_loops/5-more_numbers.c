#include "main.h"

/**
 * more_numbers - prints out 0-14 10x
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int j;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
