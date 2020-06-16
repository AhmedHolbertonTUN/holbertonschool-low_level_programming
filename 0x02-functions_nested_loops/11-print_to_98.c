#include "holberton.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: Integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a, i, r, r1, r2;

	if (n < 0)
	{
		{
			a = abs(n);
			for (i = a; i > 0; i--)
			{
				if (i < 10)
				{
					_putchar('-');
					_putchar(i + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					r = i / 10;
					r1 = i % 10;
					_putchar('-');
					_putchar(r + '0');
					_putchar(r1 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		for (i = 0; i < 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				r = i / 10;
				r1 = i % 10;
				_putchar(r + '0');
				_putchar(r1 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if ((n >= 0) && (n <= 98))
	{
		{
			for (i = n; i < 98; i++)
			{
				if (i < 10)
				{
					_putchar(i + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					r = i / 10;
					r1 = i % 10;
					_putchar(r + '0');
					_putchar(r1 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 99; i--)
		{
			if (i >= 100)
			{
				r = i / 100;
				r1 = (i % 100) / 10;
				r2 = i % 10;
				_putchar(r + '0');
				_putchar(r1 + '0');
				_putchar(r2 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
