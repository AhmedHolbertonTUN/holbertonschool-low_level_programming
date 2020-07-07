#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function thatconcatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s = malloc(sizeof(char) * (len1 + len2));

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = i; j < len1 + len2; j++)
		s[j] = s2[j - i];
	s[j] = '\0';
	return (s);
}
