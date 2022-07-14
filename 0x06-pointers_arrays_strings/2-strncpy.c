#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: destination value
  * @src: source value
  * @n: integer
  *
  * Return: Always 0
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && str[i] != '\0'; i++)
		dest[i] = src [i];
	for (; i< n; i++)
		dest[i] = '\0';

	return (dest);
}
