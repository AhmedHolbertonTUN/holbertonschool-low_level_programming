#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 48; a < 57; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
