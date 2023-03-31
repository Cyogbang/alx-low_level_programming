#include "main.h"
#include <string.h>
/**
 * _strcmp - string to compare
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0 || 15 || -15
 */
int _strcmp(char *s1, char *s2)
{

	if (s1 > s2)
	{
		return (-15);
	}
	else if (s1 < s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
