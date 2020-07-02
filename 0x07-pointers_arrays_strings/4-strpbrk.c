#include "holberton.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to locate occurence of accept
 * @accept: bytes to match and find in s
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, ls, lf, stop;
	char *t;

	ls = 0;
	while (s[ls] != '\0')
		ls++;
	lf = 0;
	while (accept[lf] != '\0')
		lf++;

	for (i = 0; i < ls; i++)
	{
		for (j = 0; j < lf; j++)
			if (s[i] == accept[j])
				stop = i;
		if (stop != 0)
			break;
	}

	for (i = 0; i < ls - stop; i++)
		t = s + stop;
	return (t);
}
