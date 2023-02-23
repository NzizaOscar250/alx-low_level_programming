#include "main.h"

/**
 * _isalpha - shows 1 if the input is a letter another cases, shows 0
 * @n: An input number
 * Return: 1 for letters. 0 for the rest
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

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
