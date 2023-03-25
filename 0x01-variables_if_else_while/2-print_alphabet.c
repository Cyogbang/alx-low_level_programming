#include <stdio.h>

/**
 * main - Entry point
 *printf - prints a-z
 *Return: Positive
 */
int main(void)
{

	int n = 'a';

	if (n < 'z')
	printf("%c\n", n++);

	return (0);
}
