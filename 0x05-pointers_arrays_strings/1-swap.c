#include "holberton.h"
/**
 * swap_int - a function that swaps the values of two integers
 *@a: integer
 *@b: integer
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int blank;

	blank = *a;
	*a = *b;
	*b = blank;
}
