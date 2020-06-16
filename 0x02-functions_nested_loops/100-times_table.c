#include "holberton.h"

/**
 * print_times_table - is a function that prints the n times table
 * @n: integer
 *
 * Return: times table nx
 */

void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		for (c = 0; c <= n; c++)
		{
			putchar('0');
			for (l = 1; l <= n; l++)
			{
				putchar(',');
				putchar(' ');
				r1 = c * l;
				r2 = r1 / 10;
				if (r1 < 10)
				{
					putchar(' ');
					putchar(' ');
					putchar(r1 + '0');
				}
				else if ((r1 >= 10) && (r1 < 100))
				{
					putchar(' ');
					putchar(r2 + '0');
					putchar(r1 % 10 + '0');
				}
				else
				{
					putchar(r2 / 10 + '0');
					putchar((r1 / 10) % 10 + '0');
					putchar(r1 % 10 + '0');

				}
			}
			putchar('\n');
		}
	}
}
