#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - main function
 *
 * Return: NULL
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid = 1;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-1", "tmp/", NULL};

	my_pid = getpid();
	while (i <= 4 && (child_pid != 0))
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("Error");
			return (1);
		}
		wait(&status);
		i++;
	}
	if (child_pid == 0)
	{
		printf("-----------------------------------\n\n");
		printf("ID HIJO: %u\n\nID PADRE: %u\n\n", getpid(), getppid());
		printf("-----------------------------------\n\n");
	}
	else
	{
		printf("%u MY NAME IS PADRE: %u\n", my_pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		;
	}
	return (0);
}
