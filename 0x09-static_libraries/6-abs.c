#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *@c: integer
  *
  * Return: 0 for success
  */

int _abs(int c)
{

	if (c >= 0)
		return (c);
	c *= -1;
	return (c);
}
