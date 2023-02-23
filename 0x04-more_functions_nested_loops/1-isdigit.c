#include 'main.h'

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
 
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);  /* c is a digit */
    }
    else
    {
        return (0);  /* c is not a digit */
    }
}

