#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char higher = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (higher <= 'Z')
	{
		putchar(higher);
		higher++;
	}
	putchar('\n');
	return (0);
}
