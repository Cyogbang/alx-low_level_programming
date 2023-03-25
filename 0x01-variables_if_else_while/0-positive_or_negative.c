#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* betty style doc for function main goes there
* Return: positive
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d\n, \\n is negative");
	}
	else if (n == 0)
	{
		printf("%d\n", n, "is zero");
	}
	else
	{
		printf("%d\n", n, "is positive");
	}
	n++;
	/* your code goes there */
	return (0);
}
