#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - resets an integer value to '98'
 * @i: initial parameter with value
 * n: variable int pointer
 * @*n: parameter with new value
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{

	int i;

	i = 10;
	n = &i;

	*n = 98;

	return;
}
