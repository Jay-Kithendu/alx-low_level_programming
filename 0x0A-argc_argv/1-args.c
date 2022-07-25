#include "main.h"

/**
  * main - prints the number of arguments passed into it
  * @argc: counter
  * @argv: vetor
  *
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%d\n", argc);
	return (0);
}
