#include <stdio.h>
#include <unistd.h>

/**
 * main - main function
 *
 * Return: NULL
 */
int main(void)
{
	char *argv[] =  {"/bin/ls", "-1", "/usr/", NULL};

	printf("before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("after execve\n");
	return (0);
}
