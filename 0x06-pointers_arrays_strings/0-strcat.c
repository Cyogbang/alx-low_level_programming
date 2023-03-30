#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
