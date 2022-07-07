#include "main.h"

/**
  * _isupper - check if its uppercase
  *@x: the character that is checked
  *
  *Return: 1 for success or 0 for otherwise
  */

int _isupper(int c) 
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}