#include "main.h"

/**
 * leet - a function that encode a string
 *
 * @str: set of strings  to encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, j;
	char lc[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lc[j] != '\0'; j++)
		{
			if (str[i] == lc[j])
			{
				str[i] = e[j];
			}
		}
	}
	return (str);
}
