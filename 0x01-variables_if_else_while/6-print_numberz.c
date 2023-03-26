#include <stdio.h>

/**
 * main - Entry point
 * putchar - adding '0' + n allows us print int.
 * Return: positive
 */

int main(void)
{
int a = 0;

while (a < 10)
{
putchar('0' + a);
a++;
}
putchar('\n');

return (0);
}
