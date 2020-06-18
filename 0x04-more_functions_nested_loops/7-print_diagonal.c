#include "holberton.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
