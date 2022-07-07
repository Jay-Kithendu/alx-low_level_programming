#include "main.h"

/**
  *print_most_numbers - function that prints the numbers, from 0 to 9
  *
  */

void print_most_numbers(void)
{
	int x = 0;

	while ((x <= 9) && (x !=2 || x != 4))
	{	_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
