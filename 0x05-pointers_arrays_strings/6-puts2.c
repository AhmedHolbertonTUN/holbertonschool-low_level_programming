#include "holberton.h"
/**
 * puts2 -  a function that prints every other character of a string
 *
 * @str: string
 * Return: returns the length of the string
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j = j + 2)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
