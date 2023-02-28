#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates a random valid password for 101-crackme program
 * Return: Always 0 (Success)
 */

int main(void)
{
    char password[7]; /* Password must be 6 characters long, plus null terminator */
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /* Allowed characters in password */
    const int len_charset = sizeof(charset) - 1; /* Length of charset */

    srand(time(NULL)); /* Seed random number generator */

    for (int i = 0; i < 6; i++)
    {
        password[i] = charset[rand() % len_charset]; /* Choose random character from charset */
    }

    password[6] = '\0'; /* Add null terminator to end of password */

    printf("%s\n", password); /* Print password */

    return (0);
}

