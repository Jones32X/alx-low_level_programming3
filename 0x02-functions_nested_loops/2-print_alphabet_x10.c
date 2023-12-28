#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alpahbet 10 times,
 * followed by a new line.
 * Return: Nothing;
 */

void print_alphabet_x10(void)
{
	int k = 0;
	char c;

	while (k <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		k++;
	}
}
