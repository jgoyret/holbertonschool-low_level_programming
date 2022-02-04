#include <stdio.h>

/**
 * main - print alhpabet in lower cases and upper
 *
 * Return: Always 0
 *
 **/

int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
