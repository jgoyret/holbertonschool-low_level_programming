#include <stdio.h>

/**
 *
 * main - display alphabet in lowercases
 *
 * Return: Always 0
 *
 **/
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		printf("%c", c);
	printf("\n");
	return (0);
}
