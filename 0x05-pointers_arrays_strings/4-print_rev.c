#include "holberton.h"
/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (n = i-1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
