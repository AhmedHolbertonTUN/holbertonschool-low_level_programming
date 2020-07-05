#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: The number of command line arguments
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}