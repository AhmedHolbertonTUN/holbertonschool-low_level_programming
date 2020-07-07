#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - function that duplicate a string
 * @str: string
 *
 * Return: string
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * len);
	if (len == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
