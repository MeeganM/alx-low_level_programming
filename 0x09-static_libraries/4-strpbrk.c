#include "main.h"

/**
 *  _strpbrk - matches any character specified
 *  @s: This is the C string to be scanned.
 *   @accept:character in str1 that matches one of the characters in str2
 *   Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (*s == accept[y])
			{
				return (s);
			}

			y++;
		}

		s++;
	}
	return (0);

}
