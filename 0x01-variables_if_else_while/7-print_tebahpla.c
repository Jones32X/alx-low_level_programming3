#include <stdio.h>

/**
 * main - prints alphabet in reverse in lowercase too
 * Return: 0 Success
 */

int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		--k;
	}
	putchar('\n');

	return (0);
}
