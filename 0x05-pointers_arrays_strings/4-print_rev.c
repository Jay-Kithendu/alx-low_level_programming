#include "main.h"

/**
  * print_rev -  prints a string, in reverse
  * @s: string
  *
  * Return: Always 0
  */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i--;
	}
	_putchar("\n");
}
