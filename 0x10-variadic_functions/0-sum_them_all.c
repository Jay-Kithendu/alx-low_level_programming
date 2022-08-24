#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: number of args
  *
  * Return: 0 for no args or sum for success
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum;
	
	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end (ap);
        return (sum);
}
