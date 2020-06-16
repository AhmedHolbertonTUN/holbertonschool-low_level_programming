#include "holberton.h"

/**
 * _abs is a function that print the sign of a number.
 *
 * Returns n if n is greater than zero.
 * Returns -n and prints - if n is less than zero.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
