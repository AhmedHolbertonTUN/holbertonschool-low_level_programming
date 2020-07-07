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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
		for (j = 0; j < len2; i++; j++)
		s[i] = s2[j];
	return (s);
}
