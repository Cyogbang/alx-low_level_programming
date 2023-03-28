#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if a character alphabet
 * @c: the character to check
 *
 * Return: return 1 if alphabet and 0 otherwise
 */
int _isalpha(int c)
{

	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
