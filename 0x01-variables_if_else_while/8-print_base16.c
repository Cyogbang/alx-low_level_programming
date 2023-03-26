#include <stdio.h>

/**
 * main - Entry point
 * putchar - print base 16 numbers
 * Return: positive
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
