#include <stdio.h>
#include <stdib.h>
#include <string.h>
/**
 * main -print the alphabet without q and e.
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 90 : i < 123 : i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
