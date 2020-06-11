#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is ", n);
	if (l > 5)
		printf("%d and %d is greater than 5\n", l, l);
	else if (l == 0)
		printf("%d and %d is 0\n", l, l);
	else if (l < 6)
		printf("%d and %d is less than 6 and not 0 \n", l, l);
return (0);
}
