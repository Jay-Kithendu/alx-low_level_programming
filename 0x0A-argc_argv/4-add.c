#include "main.h"

/**
  * isInteger - check if its an int
  * @s: string to check
  *
  * Return: 0 or 1
  */

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
  * main -  program that adds positive numbers
  * @argc: counter
  * @argv: vector
  *
  * Return: Always 0;
  */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			print("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
