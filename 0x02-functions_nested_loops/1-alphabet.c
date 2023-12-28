#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in lowecase then a new line
 * Return: 0 Success
 */

void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');

}
