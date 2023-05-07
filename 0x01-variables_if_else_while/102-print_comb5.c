#include <stdio.h>
/**
 * main- print all possible combinations ot two two -digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int f, g;

	for (f = 0; f <= 98; f++)
	{
		for (g = f + 1; g <= 99; g++)
		{
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
			putchar(' ');
			putchar((g / 10) + '0');
			putchar((g % 10) + '0');
			if (f == 98 && g == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
