#include "main.h"

/**
  * print_rev -  prints a string, in reverse
  * @s: string
  *
  * Return: Always 0
  */

void print_rev(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
