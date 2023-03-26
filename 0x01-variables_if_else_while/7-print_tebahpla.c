#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints the alphabet in reverse
 * Return: positive
 */

int main(void)
{

	int k = 'z';

	while (k >= 'a')
	{
	putchar(k);
	k--;
	}
	putchar('\n');
}
