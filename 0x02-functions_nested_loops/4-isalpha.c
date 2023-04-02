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
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
