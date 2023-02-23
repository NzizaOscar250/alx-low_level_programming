/**
 * _isalpha - Checks if a character is alphabetic.
 *
 * This function checks whether a character is alphabetic, which
 * means it is either an uppercase or lowercase letter. If the character
 * is alphabetic, the function returns 1. If not, it returns 0.
 *
 * @param c The character to check.
 *
 * @return Returns 1 if c is alphabetic, 0 otherwise.
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
