#include <stdio.h>

/**
* main - print sizes of various data types using sizeof
* Description:Program that print out the string is followed by a new line
* Return: int 0 when done and no errors
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float:%d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
