#include "holberton.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: string
 * @src: string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
