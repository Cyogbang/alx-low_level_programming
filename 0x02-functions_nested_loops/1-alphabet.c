#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_alphabet - code prototype
 * Return: positive
 */

void print_alphabet(void);
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');

	return (0);
}