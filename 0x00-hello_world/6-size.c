#include <stdio.h>
/**
 * main - This is a program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
char k;
int m;
long int l;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
}
return (0);
