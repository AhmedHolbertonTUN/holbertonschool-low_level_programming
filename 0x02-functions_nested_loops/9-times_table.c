#include "holberton.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: 9 times table
 *
 */
void times_table(void)
{
	int c;
	int l;
	int r1;
	int r2;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0');
		for (l = 1; l <= 9; l++)
		{
			_putchar(',');
			_putchar(' ');
			r1 = c * l;
			r2 = r1 / 10;
			if (r1 <= 9)
			{
				_putchar(' ');
				_putchar(r1 + '0');
			}
			else
			{
				_putchar(r2 + '0');
				_putchar(r1 % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
