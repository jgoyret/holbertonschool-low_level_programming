#include <stdio.h>
/**
 * main - showing hexadecimals numbers with putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
