#include <stdio.h>

/**
 * main -Print the alphabet lowercase and uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
int b = 97;
int c = 65;
while (b <= 122)
{
	putchar(b);
}
while (c <= 90)
{
	putchar(c);
}
putchar('\n');
return (0);
}
