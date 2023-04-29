 #include "main.h"

 /**
  * _isupper - return 1 if isUpperCase else return 0
  * @c: the char being checked
  * Return: 1 if is upper else 0
  *
  */


int _isupper(int c)
{       	
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}		
