#include <stdio.h>

/**
 * main - Entry point
 *printf - prints a-z
 *Return: Positive
 */
int main(void)
{
	int n = 'a' && 'A';

	while (n <= 'z' && 'Z')
	{
		printf("%c", n++);
		printf("\n");
	}

	return (0);
}
