#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: the integer
  *
  * Return: -1 for less than 0, 1 for 0, factorial for success
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
