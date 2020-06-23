#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 *@s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int t, i, j, k;
	char tmp[5000];

	t = 0;
	while (s[t] != '\0')
		t++;
	j = 0;
	for (i = t - 1; i >= 0; i--)
	{
		tmp[j] = s[i];
		j++;
	}
	for (k = 0; k <= t; k++)
		s[k] = tmp[k];
}

