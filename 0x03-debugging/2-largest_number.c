#include "main.h"
#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int main(void);
{
 	int a, b, c;
	int largest;
        
	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		putchar(a); 
	}
	else if (b > c)
	{
		putchar(b); 
	}
	else
	{
		putchar(c);
	}

	return (0);
}
