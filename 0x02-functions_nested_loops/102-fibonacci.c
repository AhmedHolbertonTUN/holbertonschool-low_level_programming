#include <stdio.h>

/**
 * main - print 50 firsy fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int xn1, n, xn2, i;
	unsigned long  xn;

	n = 50;
	xn1 = 0;
	xn2 = 1;
	for (i = 0; i < n; i++)
	{
		xn = xn1 + xn2;
		xn1 = xn2;
		xn2 = xn;
		printf("%lu, ", xn);
	}
	return (0);
}
