#include "main.h"

/**
 * _strcpy - prints a copied string to another address
 * @dest:Pointer address to copy to.
 * @src: Source address to copy from
 * Return: nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
