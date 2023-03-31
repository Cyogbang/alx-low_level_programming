#include "main.h"
#include <string.h>

/**
 * _strncat - copy string from src to dest
 * @dest: string one
 * @src: string two
 * @n: number copied
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
