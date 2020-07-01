#include "holberton.h"

/**
 *factorial -function that calculate factorial of a given number
 *@n: integer
 *
 *Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
