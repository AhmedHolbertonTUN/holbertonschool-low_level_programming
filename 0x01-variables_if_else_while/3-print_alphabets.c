#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char a;

for (a = 97; a <= 122; a++)
putchar(a);
for (a = 65; a <= 90; a++)
putchar(a);
putchar('\n');
return (0);
}