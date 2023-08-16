#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0
 */
int main(void)
{
	long int a;
	long int b = 1;
	long int c = 2;
	long int sum = 0;
	long int tsum = 0;

	for (a = 0; a < 49; a++)
	{
		if ((c % 2 == 0) && (c <= 4000000))
		{
			tsum = tsum + c;
		}
		sum = b + c;
		b = c;
		c = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
