#include "holberton.h"

/**
 * _abs - a function that print the sign of a number
 *@n : integer
 *
 * Return: absolute value of n
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
