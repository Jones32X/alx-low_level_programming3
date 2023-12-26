#include "stdio.h"

/**
 * main - program that prints out alphabet
 * in lowercase then in uppercase.
 * Return: 0 Success
 */

int main(void)
{
	int j = 'A', k = 'a';

	for (; k <= 'z'; k++)
        {
                putchar(k);
        }

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);

}
