#include "main.h"

/**
  * *_strcpy - copy a string
  * @dest: destinatio
  * @src: source
  *
  * Return: Always 0
  */

char *_strcpy(char *dest, char *src)
{

	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

