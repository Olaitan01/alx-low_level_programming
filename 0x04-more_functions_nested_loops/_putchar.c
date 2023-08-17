#include <unistd.h>

/**
 * _putchar - writes the character C out to stdout
 * @c: The character to print
 * Return: Always 0 (Succees)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
