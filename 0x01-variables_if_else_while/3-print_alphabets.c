#include <stdio.h>

/**
 * main -Print the alphabet without q and e.
 *
 * Return: Always 0
 */
int main(void) 
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar('\n')
return (0);
}
