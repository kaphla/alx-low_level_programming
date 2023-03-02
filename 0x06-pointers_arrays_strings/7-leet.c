#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @n: the input function
 * Return: n
 */

char *leet(char *n)
{
	int den;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (den = 0; n[den] != '\0'; den++)

		for (j = 0; j < 10; j++)

		{
			if (n[den] == s1[j])
			{
				n[den] = s2[j];
			}
		}
	return (n);
}
