#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, x;

	for (num = '0'; num < '9'; num++)
	{
		for (x = num + 1; x <= '9'; x++)
		{
			if (x != num)
			{
				putchar(num);
				putchar(x);

				if (num == '8' && x == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
