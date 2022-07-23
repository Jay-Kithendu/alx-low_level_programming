#include "main.h"
#include <string.h>

/**
  * puts2 - prints character of a string, starting with the 1st character
  * @str: string
  *
  *Return: Alyways o
  */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
