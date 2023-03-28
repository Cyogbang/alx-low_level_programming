#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 * Description - this code test for character case
 * @c: the variable to test
 *
 * Return: positive
 */

int _islower(int c)
{

if (c >= 'a' && <= 'z')
{
return (1);
}
else
{
return (0);
}
