#include <stdio.h>
/**
 * main - Print all single digit number of base 10.
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
