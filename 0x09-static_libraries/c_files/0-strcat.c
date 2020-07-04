#include "holberton.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, j;

	len1 = 0;
	while (dest[len1] != '\0')
		len1++;
	len2 = 0;
	while (src[len2] != '\0')
		len2++;
	for (j = len1; j < len1 + len2; j++)
		dest[j] = src[j - len1];
	return (dest);
}
