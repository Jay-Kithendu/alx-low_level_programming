#include "main.h"

/**
  * print_rev - print in reverse
  *@str: string
  *
  * Return: Always 0
  */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1 ; i >= 0; i--)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}
