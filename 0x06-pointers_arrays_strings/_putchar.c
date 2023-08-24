#include <unistd.h>

/**
 * _putchar - Prints output to stdout
 *
 * @c: The input variable
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
