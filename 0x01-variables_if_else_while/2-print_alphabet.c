#include <stdio.h>
/**
 * main - Print the alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
char x;
char y;
x = 'a';
y = '\n';

while (x <= 'z')
{
putchar(x);
x++;
}
putchar(y);
return (0);

