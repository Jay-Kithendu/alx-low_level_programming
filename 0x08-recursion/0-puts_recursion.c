#include "main.h"

/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: the string
  *
  */

void _puts_recursion(char *s)
{
	if (s != '\0')
	{
	_putchar(s);
	_putchar('\n');
	}
	_puts_recursion = _puts_recursion(s + 1);

}
