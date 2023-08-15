#include <unistd.h>

/**
 * _putchar - Writes the  character C out to stdout
 * @c: The character to print
 * Return: Always 0 (Success)
 * on error, -l is returned, and error is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
