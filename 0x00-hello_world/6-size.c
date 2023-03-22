#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a short if statement
 * Return: positive zero return
 */
int main(void)
{
	char c;
	int i;
	long int e;
	long long int y;
	float f;

printf("Size of a char: %lu.", (unsigned long)sizeof(c)"byte(s)\n");
printf("Size of a int: %lu.", (unsigned long)sizeof(i)"byte(s)\n");
printf("Size of a long int: %lu.", (unsigned long)sizeof(e)"byte(s)\n");
printf("Size of a long long int: %lu.", (unsigned long)sizeof(y)"byte(s)\n");
printf("Size of a float: %lu.", (unsigned long)sizeof(f)"byte(s)\n");

return (0);
}
