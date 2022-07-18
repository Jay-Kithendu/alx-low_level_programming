#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: memory area
  * @b: the byte
  * @n: number of bytes
  *
  * Return: s memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
