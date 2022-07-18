#include "main.h"

/**
  * _strchr - function that locates a character in a string
  * @s: string
  * @c: character
  *
  * Return: c if successful and nullfor otherwise
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	
	if (s[i] == c)
		return (s);

	return ('\0');
}
