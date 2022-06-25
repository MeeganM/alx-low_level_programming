#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program, followed new line
 * @argc:argc parameter
 * @argv: array of command listed
 * Return:0 for sucess
 */
int main(int argc, char *argv[])
{	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] != '\0'; j++)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argc[k]);
		result += num
	}
	printf("%d\n", result);
	return (0);
}
