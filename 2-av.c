#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @ac: argument
 * @av: argument
 *
 * Return: NULL
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
