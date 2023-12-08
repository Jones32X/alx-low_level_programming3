#include <stdio.h>

/**
 * main - prints alphabet in lowercase and
 * uppercase
 * Return: (0)
 */

int main(void)
{
	char c, U = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');

	return (0);
}
