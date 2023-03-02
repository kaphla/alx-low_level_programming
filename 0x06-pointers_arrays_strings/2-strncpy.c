#include "main.h"

/**
 * _strncpy - A function that copies a string with n
 * @dest: where it copies to
 * @src: where it copies from
 * @n: number to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{

	int den;

	den = 0;
	while (den < n && src[den] != '\0')
	{
	dest[den] = src[den];
	den++;
	}
	while (den < n)
	{
		dest[den] = '\0';
		den++;
	}

	return (dest);
}
