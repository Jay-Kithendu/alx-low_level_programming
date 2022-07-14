#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: for success
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + 1))
		return (*(s1 + i) - *(s2 + i));
	return (0);
}
