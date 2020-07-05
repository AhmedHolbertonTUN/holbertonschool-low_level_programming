#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: The number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
