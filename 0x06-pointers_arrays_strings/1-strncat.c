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
	int a = 0, i = 0;

	while (dest[a] != '\0')
		a++;
	do {
		dest[a + i] = src[i];
		i++
	} while (i < n && src[i] != '\0');
	dest[a + i] = '\0';
	return (dest);
}
