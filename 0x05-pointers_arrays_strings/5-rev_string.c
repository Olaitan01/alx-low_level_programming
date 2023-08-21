#include "main.h"

/**
 * rev_string - print a reverse string
 * @s: The input to be reverseed
 * Return: nothing
 */

void rev_string(char *s)
{
	char r = s[0];
	int c = 0;

	int i = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
