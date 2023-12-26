#include "stdio.h"

/**
 * main - program that prints the alphabet in lowercase
 * follwed by a new line.
 * Return: 0 Success
 */

int main(void)
{
	int n = 'a';

	do {
		putchar(n);
		n++;
	}while(n <= 'z');

	putchar('\n');

	return (0);
}
