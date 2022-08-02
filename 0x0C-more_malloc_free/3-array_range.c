#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum int
  * @max: maximum int
  *
  * Return: new array
  */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; min++)
		*(p+i) = min;
	return (p);
}
