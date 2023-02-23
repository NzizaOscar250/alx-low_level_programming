#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int i, num1 = 1, num2 = 2, next = 0;

    printf("%lu, %lu, ", num1, num2);
    for (i = 0; i < 96; i++)
    {
        next = num1 + num2;
        printf("%lu", next);
        if (i != 95)
            printf(", ");
        num1 = num2;
        num2 = next;
    }
    printf("\n");

    return (0);
}

