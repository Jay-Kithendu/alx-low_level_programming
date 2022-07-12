#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: string
  *
  * Return: Always 0
  */

void _puts(char *str)
{
	int c = 0;

	while (str[i] != '\0')
	{
		putchar("%s\n", c);
		i++;
	}
	putchar('\n');
}
