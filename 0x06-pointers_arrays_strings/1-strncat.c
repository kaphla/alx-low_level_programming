#include "main.h"


/**
 * _strncat - A function that concatenates two strings with n byte
 * @dest: where the strigg goes to
 * @src: where strings copies from
 * @n: number to be copied
 * Return: A pointer returning to dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int den;
	int j;

	den = 0;
	while  (dest[den++] != '\0')
	{
	den++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	den++;
	j++;
	}
	dest[den] = '\0';
	return (dest);

}
