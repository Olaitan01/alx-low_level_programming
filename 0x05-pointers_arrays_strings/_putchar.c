#include <unistd.h>

/**
 * _putchar - prints to stdout
 * @c: The input to print to stdout
 * Return: 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
