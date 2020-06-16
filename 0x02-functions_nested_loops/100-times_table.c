#include "holberton.h"

/**
 * print_times_table - is a function that prints the n times table
 * @n: integer
 *
 * Return: times table nx
 */

void print_times_table(int n)
{
	int c, l, r1, r2;

	if ((n >= 0) && (n <= 15))
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');
			for (l = 1; l <= n; l++)
			{
				_putchar(',');
				_putchar(' ');
				r1 = c * l;
				r2 = r1 / 10;
				if (r1 < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r1 + '0');
				}
				else if ((r1 >= 10) && (r1 < 100))
				{
					_putchar(' ');
					_putchar(r2 + '0');
					_putchar(r1 % 10 + '0');
				}
				else
				{
					_putchar(r2 / 10 + '0');
					_putchar((r1 / 10) % 10 + '0');
					_putchar(r1 % 10 + '0');

				}
			}
			_putchar('\n');
		}
	}
}
