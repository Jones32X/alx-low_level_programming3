#include <stdio.h>

/**
 * main - numbers of base 16 in lowercase
 * Return: 0 Success
 */

int main(void)
{
	int n = 0;
	char c = 'a';

	for (; n < 10; n++)
	{
		putchar(n + '0');
	}

	do {
		putchar(c);
		c++;
	} while (c <= 'f');

	putchar ('\n');

	return (0);
}
