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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
