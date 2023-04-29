#include "main.h"

/**
 * _isdigit - Check if a checker is a digit
 * @c: The number to be checke
 * Return: 1 for a checker that will be a digit or else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}	
	return (0);
}
