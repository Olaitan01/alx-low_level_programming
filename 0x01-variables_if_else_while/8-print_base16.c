#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (char alpha = 'a'; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
		return (0);
}
