#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
 * add_strings - A function that adds two string numbers
 * @n1: The string of the first number too be added
 * @n2: The string of the second  number too be added
 * @r: where the results are added
 * @r_index: The preset buffer index
 * Return: If r can store sum - a pointer to result.
 *	If r doesn't store sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int den;
	int dent = 0;

	for (; *n1 && *n2; n1--, r_index--)
	{
		den = (*n1 - '0') + (*n2 - '0');
		den += dent;
		*(r + r_index) = (den % 10) + '0';
		dent = den / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		den = (*n1 - '0') + dent;
		*(r + r_index) = (den % 10) + '0';
		dent = den / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		den = (*n2 - '0') + dent;
		*(r + r_index) = (den % 10) + '0';
		dent = den / 10;
	}

	if (dent && r_index >= 0)
	{
		*(r + r_index) = (dent % 10) + '0';
		return (r + r_index);
	}
	else if (dent && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - A function that adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The result to be store.d
 * @size_r: The size.
 *
 * Return: if r store the sum - a pointer to the result.
 *	if r could not store sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_den = 0, n2_den = 0;

	for (index = 0; *(n1 + index); index++)
		n1_den++;
	for (index = 0; *(n2 + index); index++)
		n2_den++;

	if (size_r <= n1_den + 1 || size_r <= n2_den + 1)
		return (0);

	n1 += n1_den - 1;
	n2 += n2_den - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
