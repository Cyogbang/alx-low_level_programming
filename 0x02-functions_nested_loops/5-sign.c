#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints a sign
 * @n: the sign to print
 *
 * Return: positive
 */

int print_sign(int n)
{

	if (n > '0')
	{
	putchar('+');
	return (1);
	}

	else if (n == '0')
	{
	putchar('0' + 0);
	return (0);
	}

	else
	{
	putchar('-');
	return (-1);
	}
}
