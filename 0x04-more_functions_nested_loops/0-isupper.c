#include "main.h"

/**
 * _isupper() : knownig if the input character is uppercase
 *
 * Return: return 1 if input character is uppercase and 0 if not 
 **/

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
