#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
 
char *_strcat(char *dest, const char *src)
{
    char *p = dest;

    while (*p)
    {
        p++;
    }

    while (*src)
    {
        *p++ = *src++;
    }

    *p = '\0';

    return dest;
}


