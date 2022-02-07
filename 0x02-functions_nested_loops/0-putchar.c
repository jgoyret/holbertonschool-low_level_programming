#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0
 **/ 
int main(void)
{
	int i;
	char palabra[] = "_putchar";
	
	for (i = 0; i < 8; i++)
	{
		_putchar(palabra[i]);
	}
	_putchar('\n');
	return 0;
}
