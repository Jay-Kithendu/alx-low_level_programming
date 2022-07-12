#include "main.h"

/**
  * print_rev -  prints a string, in reverse
  * @s: string
  *
  * Return: Always 0
  */

void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) - 1;


	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	}
}
