#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char string[8] = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar (string[x]);
	}
	_putchar ('\n');
	return (0);
}
