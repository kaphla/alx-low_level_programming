#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @str: The string
 * Return: pointer of strings
 */

char *cap_string(char *str)
{
	int den = 0;

	while (str[den])
	{
		while (!(str[den] >= 'a' && str[den] <= 'z'))
			den++;
		if (str[den - 1] == ' ' ||
		    str[den - 1] == '\t' ||
		    str[den - 1] == '\n' ||
		    str[den - 1] == ',' ||
		    str[den - 1] == ';' ||
		    str[den - 1] == '.' ||
		    str[den - 1] == '!' ||
		    str[den - 1] == '?' ||
		    str[den - 1] == '"' ||
		    str[den - 1] == '(' ||
		    str[den - 1] == ')' ||
		    str[den - 1] == '{' ||
		    str[den - 1] == '}' ||
		    den == 0)
			str[den] -= 32;
		den++;
	}
	return (str);
}
