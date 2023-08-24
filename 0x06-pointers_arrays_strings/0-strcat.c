#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: destination to append to.
 * @src: source to append from
 * Return: nothing
 */

char *_strcat(char *dest, char *src)
{
	char *destPtr = dest;

	while (*destPtr != '\0')
	{
		destPtr++;
	}

	while (*src != '\0')
	{
		*destPtr = *src;
		destPtr++;
		src++;
	}

	*destPtr = '\0';

	return (dest);
}
