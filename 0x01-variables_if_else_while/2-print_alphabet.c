#include <stdio.h>

/**
 * main - Entry point
 *printf - prints a-z
 *Return: Positive
 */
int main(void)
{

	int n = 'a';

	while (n <= 'z')
	printf("%c", n++);\n

	return (0);
}
