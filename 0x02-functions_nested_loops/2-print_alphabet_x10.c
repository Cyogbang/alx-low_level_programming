#include <stdio.h>
#include "main"

/**
 * print_alphabet_x10 - alphabets in 10 places
 */

void print_alphabet_x10(void)
{
int i = '0', j;

while (i <= '11')
{

	j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}
putchar('\n');
i++;
}
}
