#include <stdio.h>

/**
 * main -Print the alphabet lowercase and uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
int b = 97;
int B = 65;
while (b <= 122)
{
	putchar(b);
	b++;
}
while (B <= 90)
{
	putchar(B);
	B++;
}
putchar('\n');
return (0);
}
