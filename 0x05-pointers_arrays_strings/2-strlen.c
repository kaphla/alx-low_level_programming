#include <stdio.h>

/**
 * _strlen- Writing a function that returns the length of a string
 * @str: This is the string to get the len
 * Return: length of @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
