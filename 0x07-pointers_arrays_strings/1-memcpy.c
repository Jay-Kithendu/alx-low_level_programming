#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: destination
  * @src: source value
  * @n: integer
  *
  *Return: dest value
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int *ptr;

	ptr = &dest;

	for (i = 0; i < n; i++)
	{
		ptr[i] = src[i];
	}
	return (dest);
}
