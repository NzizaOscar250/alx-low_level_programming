#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	/* Check if c is an uppercase or lowercase letter */
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}

	return (isletter);
}
