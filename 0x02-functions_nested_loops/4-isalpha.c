#include "main.h"

/**
  *_isalpha to check if it's a letter
  *
  *Return: 1 for its a letter and 0 for otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		return (1);
	}
	return (0);

}
