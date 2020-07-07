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

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
return (s);
}
