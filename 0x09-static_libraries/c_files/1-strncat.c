#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: size
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, j;

	len1 = 0;
	while (dest[len1] != '\0')
		len1++;
	len2 = 0;
	while (src[len2] != '\0')
		len2++;
	if (n < len2)
		for (j = len1; j < len1 + n; j++)
		{
			dest[j] = src[j - len1];
		}
	else
		for (j = len1; j < len1 + len2; j++)
			dest[j] = src[j - len1];
	return (dest);
}
