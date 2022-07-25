#include "main.h"

/**
  * main - prints its name, followed by a new line
  * @argc: the counter
  * @argv: the vector
  *
  *Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
