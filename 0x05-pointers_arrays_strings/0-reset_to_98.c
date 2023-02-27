#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value pointed to by n to 98
 * @n: a pointer to an integer
 *
 * Return: void
 */
 
 void reset_to_98(int *n)
 {
 	*n = 98;
 }


/**
 * main - the entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

