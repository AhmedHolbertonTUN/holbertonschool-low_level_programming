#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: Integer
 *
 * Return: from n to 98
 */
void print_to_98(int n)
{

	if (n >= 0 && n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	if (n < 0)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
