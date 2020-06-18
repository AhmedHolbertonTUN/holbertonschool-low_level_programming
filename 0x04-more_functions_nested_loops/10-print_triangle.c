#include "holberton.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: integer
 * Return: triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
	for (k = 1; k <= size; k++)
	{
		for (i = size + 1 - k; i > 1; i--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= k; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
