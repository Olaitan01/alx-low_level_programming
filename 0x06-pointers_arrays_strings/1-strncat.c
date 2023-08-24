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
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}


	return (dest);
}
