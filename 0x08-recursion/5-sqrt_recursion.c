#include "holberton.h"
/**
 *check - function that returns the power of number
 *@n: int
 *@y: int
 *
 *Return: int
 */
int check(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);

	}
	return (check(n, y + 1));
}
/**
 *_sqrt_recursion - function that returns the power of number
 *@n: integer
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	return (check(n, 1));
}
