#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse.
 * Return: Always 0
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
		return (0);
}
