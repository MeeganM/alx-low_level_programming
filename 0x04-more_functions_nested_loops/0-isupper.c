#include "main.h"
/**
 * function that checks for uppercase character.
 * _isupper - evalue if letter is uppercase .
 * 
 * @c: print int
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
