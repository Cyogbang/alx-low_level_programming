#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the variable to test
 *
 * Return: 1 if char is lowercase, oterwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
