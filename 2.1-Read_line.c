#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: NULL
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
	}
	return (0);
}
