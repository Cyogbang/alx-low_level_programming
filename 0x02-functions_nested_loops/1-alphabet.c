#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - code prototype
 * Return: positive
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');

	return;
}
