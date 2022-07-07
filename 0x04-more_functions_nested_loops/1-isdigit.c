#include "main.h"

/**
  * _isdigit - checks if its a digit
  * @c: integer
  *
  *Return: 1 for digit or 0 for otherwise
  */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
