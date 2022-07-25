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
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
