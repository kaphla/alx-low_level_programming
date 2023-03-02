#include "main.h"

/**
 * string_toupper - A function that changes all lowercase to uppercase
 * @n: the pointer, pointer to the string
 * Return: char
 */

char *string_toupper(char *n)
{
int den;

	den = 0;
	while (n[den] != '\0')
	{
		if (n[den] >= 'a' && n[den] <= 'z')
			n[den] = n[den] - 32;
		den++;
	}
	return (n);
}
