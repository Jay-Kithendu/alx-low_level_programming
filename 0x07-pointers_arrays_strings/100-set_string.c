#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: source value
  * @to: destinatiom
  *
  * Return: to value
  */

void set_string(char **s, char *to)
{
	int i = 0;

	while (s[i++])
		to[i] == s[i];
	return (to);
}
