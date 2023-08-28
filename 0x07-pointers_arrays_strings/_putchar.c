#include <unistd.h>

/**
 * _putchar - prints an output to stdio
 *
 * @c: the input character printed out
 *
 * Return: Nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
