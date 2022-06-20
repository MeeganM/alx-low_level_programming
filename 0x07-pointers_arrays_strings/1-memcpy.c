#include "main.h"
/**
 * _memcpy -   copy number bytes form adress "from" to adress "to"
 * @dest: content is to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;

	}

	return (dest);
}
