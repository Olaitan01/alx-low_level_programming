#include "main.h"

/**
 * _memset - fills  a memory with a constant byte.
 * @s: The pointer to the address of the memory
 * @b: The value to save in the memory
 * @n: The size of the memory to be fill
 *
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
