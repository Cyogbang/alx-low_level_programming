#include <stdio.h>

/**
 * main - Entry point
 *printf - prints a-z
 *Return: Positive
 */
int main(void)
{
	int n;
	int b;

	for (n = 'a'; n <= 'z'; n++)
	{
	printf("%c", n);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
	printf("%c", b);
	}
	printf("\n");

	return (0);
}
