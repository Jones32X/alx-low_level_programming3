#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to the variable n
 * n: stores random generated number
 * Return: 0 (Sucesss)
 *
 */

int main(void)
{
	int n, j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j < 6 && j != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
	}
	if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	else if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	return (0);
}
