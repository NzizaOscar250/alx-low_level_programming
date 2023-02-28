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
    char password[7]; 
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; 
    const int len_charset = sizeof(charset) - 1;

    srand(time(NULL)); 

    for (int i = 0; i < 6; i++)
    {
        password[i] = charset[rand() % len_charset];
    }

    password[6] = '\0'; 

    printf("%s\n", password); 

    return (0);
}

