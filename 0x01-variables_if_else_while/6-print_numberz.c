#include <stdio.h>

/**
 * main - numbers to base 10 with putchar
 * Return: 0 is Succes
 */

int main(void)
{
	int p;

	p = 0;

	do {
		putchar(p + '0');
		p++;

	} while (p < 10);

	putchar('\n');

	return (0);
}
