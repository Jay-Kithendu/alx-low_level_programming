#include "main.h"

/**
  * _pow_recursion - function that returns the value of x raised to the power of y
  * @x: integer
  * @y: the power 
  *
  * Return: -1 if y is less than 0, power if successful
  */

int _pow_recursion(int x, int y)
{
	 if (y < 0)
	 {
		 return (-1);
	 }
	 if (y == 1)
		 return (1);
	 return (x * (_pow_recursion(x, y-1)));
}
