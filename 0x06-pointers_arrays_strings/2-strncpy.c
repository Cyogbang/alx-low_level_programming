#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to copy to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	strncpy(dest, src, n);
	return (dest);
}
