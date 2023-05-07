#include <stdio.h>
/**
 * main - Print  numbers of base 16 .
 * Retrun: Always 0
 */
int main(void)
{
	int g;
	int G;

	for (g = 48; g <= 57; g++)
	{
		putchar(g);
	}
	for (G = 97; G <= 102; G++)
	{
		putchar(G);
	}
	putchar('\n');
	return (0);
}
