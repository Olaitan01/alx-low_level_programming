#include "main.h"

/**
 * print_times_table - returns the timetable
 *
 * @n: The value of the printeds timestable
 */
void print_times_table(int n)
{
	int a, b, res;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
			res = a * b;
			if (res <= 99)
			{
				_putchar(' ');
			}
			if (res <= 9)
			{
				_putchar(' ');
			}
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
			}
			else if (res <= 99 && res >= 10)
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
