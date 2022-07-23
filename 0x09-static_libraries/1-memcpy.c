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
	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
