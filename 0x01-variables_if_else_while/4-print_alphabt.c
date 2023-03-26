#include <stdio.h>

/**
 * main - Entry point
 * Return: positive
 * printf - print all alphabet except e and q
 */

int main(void)
{
	int n;
	int b;
	int l;

	for (n = 'a'; n < 'e'; n++)
	{
	printf("%c", n);
	}
	for (b = 'f'; b < 'q'; b++)
	{
	printf("%c", b);
	}
	for (l = 'r'; l <= 'z'; l++)
	{
	printf("%c", l);
	}
	printf("\n");

	return (0);
}
