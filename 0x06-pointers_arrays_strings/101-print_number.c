#include "main.h"
/**
 * print_number - printing number with puts
 * @n: input int
 */

void print_number(int n)
{
	int count = 0, p = 1;
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		_putchar(num / p % 10 + '0');
		p /= 10;
	}
}
