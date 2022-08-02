#include "main.h"

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: array elements
  * @size: size of array
  *
  * Return: allocated memory or null if fails
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
