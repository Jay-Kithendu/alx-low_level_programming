#include "main.h"

/**
  * print_last_digit - function that prints the last digit of a number
  *@c: integer input
  *
  * Return: The last digit success
  */

int print_last_digit(int c)
{

	int last;

	last = k % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);

}
