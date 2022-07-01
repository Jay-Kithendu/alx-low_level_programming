#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program Entry point
 *
 * Description: A program to determine whether an int is positive, negative or zero
 *
 * Return: 0 indicates success
 */

int main(void)
{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code there */

	if(n>0)
	{
	printf("%d is positive\n", n);	
	}
	else if(n==0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}

	return (0);

}
