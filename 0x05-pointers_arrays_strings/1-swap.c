#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int y;
	int x;

	y = *a;
	x = *b;

	*a = x;
	*b = y;
}
