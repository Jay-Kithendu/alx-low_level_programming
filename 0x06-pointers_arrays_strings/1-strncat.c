#include "main.h"
#include <string.h>

/**
  * _strncat - concatenates two strings
  * @dest: destination value
  * @src: source value
  * @n: integer
  *
  * Return: destination pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int _len, i;

	_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[_len +i] = src[i];
	dest[_len +i] = '\0';

	return (dest);
}
