#include "holberton.h"

/**
 * print_last_digit - a function  that prints the last digit of a number
 *@n : integer
 *
 * Return: last digit of n
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
