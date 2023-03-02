#include "main.h"

/**
 * string_toupper - A function that changes all lowercase to uppercase
 * @n: The pointer
 * Return: char
 */

char *string_toupper(char *n)

{
	int den;

	den = 0;
	while (n[den] != '\n')
	{
		if (n[den] >= 'a' && n[den] <= 'z')
			n[den] = n[den] - 32;
		den++;
	}
	return (n);
}
