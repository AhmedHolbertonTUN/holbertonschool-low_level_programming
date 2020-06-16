#include "holberton.h"

/**
 * print_last_digit is a function  that prints the last digit of a number.
 *
 * Returns : the last digit of a number.
 *
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar (-r + '0');
		return (-r);
	}
	else
	{
		_putchar (r + '0');
		return (r);
	}
}
