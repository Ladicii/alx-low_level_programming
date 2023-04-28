#include <stdio.h>

/**
* main - print sizes of various data types using sizeof
* Description:Program that print out the string is followed by a new line
* Return: int 0 when done and no errors
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf('Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", sizeof(float));
	return (0);
}
