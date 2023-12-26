#include "stdio.h"

/**
 * main - program that prints out alphabet
 * in lowercase then in uppercase.
 * Return: 0 Success
 */

int main(void)
{
	int j = 'A', k = 'a';

	while (j <='Z')
	{
		putchar(j);
		j++;
	}

	for (; k <= 'z'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);

}
