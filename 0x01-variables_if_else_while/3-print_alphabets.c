#include <stdio.h>

/**
 * main - Entry point
 *printf - prints a-z
 *Return: Positive
 */
int main(void)
{
	int n = 'a';
	int b = 'b';

	for (n <= 'z'; n++)
	{
	printf("%c", n);
	}
	for (b <= 'Z'; b++)
	{
	printf("%c", b);
	}
	printf("\n");

	return (0);
}
