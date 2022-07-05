#include "main.h"

/**
  *_isalpha to check if it's a letter
  *
  *Return: 1 for its a letter and 0 for otherwise
  */

int _isalpha(int c)
{
	for ((c >= 97 ; c <= 122) || (c >= 65 ; c <= 90))
	{

		return (1);
	}
	return (0);

}
