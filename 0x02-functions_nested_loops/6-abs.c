#include "main.h"

/**
 * _abs - computes absolute value of an interger
 * @c: Number to be inputed and checked
 * Return: Absolute value else zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_valu;

		abs_valu = c * -1;
		return (abs_valu);
	}
	return (c);
}
