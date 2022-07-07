#include "main.h"

/**
  * _isupper - check if its uppercase
  *@c: the character that is checked
  *
  *Return: 1 for success or 0 for otherwise
  */

int _isupper(int x) 
{
	if ((x >= 65) && (x <= 90))
	{
		return (1);
	}
	return (0);
}
