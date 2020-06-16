#include "holberton.h"

/**
 * print_alphabet - prints alphabet from a to z
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
