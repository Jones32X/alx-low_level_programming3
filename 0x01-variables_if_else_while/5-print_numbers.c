#include <stdio.h>

/**
 * main - numbers from base 10 printed,
 * starting from zero.
 * Return: 0 Success;
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);

}
