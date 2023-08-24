#include "main.h"

/**
 * _strncat - Copies some charaters to a  *string according to the buffer size.
 * @dest: Destinantion to append to.
 * @src: Destination to copy from.
 * @n: The buffer size.
 *
 * Return: nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destPtr = dest;

	while (*destPtr != '\0')
	{
		destPtr++;
	}

	if (*src != '\0')
	{
		*destPtr = ' ';
		destPtr++;
	}

	while (*src != '\0' && n >= 1)
	{
		*destPtr = *src;
		destPtr++;
		src++;
		n--;
	}

	*destPtr = '\0';

	return (dest);
}
