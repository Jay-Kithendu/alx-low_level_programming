#include "main.h"

/**
  * _isdigit - checks if its a digit
  * @c: integer
  * @x: refrence
  *Return: 1 for digit or 0 for otherwise
  */

int _isdigit(int c)
{
	int x;

	for (x = '0'; x < = '9'; x++)
	{
		if (c == x)
		return (1);
	}
	return (0);
}
