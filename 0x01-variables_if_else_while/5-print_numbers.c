#include <stdio.h>

/**
 * main - print numbers in base 10 with 1 digit
 *
 * Return: Always 0
 **/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
