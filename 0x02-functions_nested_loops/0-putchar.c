#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_string - prints a string
 * @s: the string to be printed
 *
 * Return: positive
 */

void print_string(char *s);

int main(void)
{
	char s[] = "_putchar";

	print_string(s);
	putchar('\n');

	return (0);
}

void print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
{
	putchar(s[i]);
	i++;
}
}
