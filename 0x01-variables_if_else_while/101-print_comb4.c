#include <stdio.h>
/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hunds, tens, ones;

	for (hunds = 0; hunds <= 9; hunds++)
	{
		for (tens = hunds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hunds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hunds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
