#include "main.h"

/**
 * _islower - check if input c of function is lower case
 *
 * c - a character that the user provides
 *
 * Return: variable estado that is 1 if lowercase true and 0 if not
 **/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
