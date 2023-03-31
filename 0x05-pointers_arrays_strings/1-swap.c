#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two variable value
 * @temp - declared variable
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
