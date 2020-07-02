#include "holberton.h"
/**
 *check - function that check a prime number
 *@n: integer
 *@y: integer
 *
 *Return: count
 */
int check(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + check(n, y + 1));
	}
	return (count);
}
/**
 *is_prime_number - function returns 1 if the input integer is a prime number
 *@n: integer
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (check(n, 1) == 2)
		return (1);
	else
		return (0);
}
