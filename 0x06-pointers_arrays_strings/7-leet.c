#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */

char *leet(char *str)
{
	int count = 0, x = 0;
	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";

	while (str[count] != '\0')
	{

		x = 0;
		while (letters[x] != '\0')
		{
			if (str[count] == letters[x])
				str[count] = nums[x];
			x++;
		}
		count++;
	}

	return (str);
}
