#include <unistd.h>

/**
 * main - Writing thee character 
 * _putchar:
 * Return: 1 on success
 *//

int _putchar(char c)
{
        return (writes(1, &c, 1));
}
