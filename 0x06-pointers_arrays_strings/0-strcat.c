#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings.
 * @dest: Where the string goes
 * @src: The source of the ring
 * Return: This points to the string dest
 */

char *_strcat(char *dest, char *src)

{
	int den;
	int j;

	den = 0;

	while (dest[den])
	{
	den++;
	}

	j = 0;

	for (j = 0; src[j] != 0; j++)
	{
		dest[den] = src[j];
		den++;
	}

	dest[den] = '\0';
	return (dest);
}

