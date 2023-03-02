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
	while  (dest[den++])
	den++;
	j = 0;
	for (j = 0; src[den] && den < n; den++)
	dest[j++] = src[den];
	return (dest);

}
