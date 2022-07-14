#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array
  * @n: number of elements
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (j = 0, i = n - 1; j < i; i--, j++)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
	}
}
