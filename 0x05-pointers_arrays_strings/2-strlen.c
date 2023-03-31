#include "main.h"
#include <string.h>
/**
 * _strlen - prints length of string
 * @s: array name
 *
 * Return: String count
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
