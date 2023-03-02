#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: string of 1
 * @s2: string of 2
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int den;

	den = 0;
	while (s1[den] != '\0' && s2[den] != '\0')
	{
		if (s1[den] != s2[den])
		{
		return (s1[den] - s2[den]);
		}
		den++;
	}
	return (0);
}
