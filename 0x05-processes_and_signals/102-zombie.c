#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite - Initializes an infinite while loop.
 *
 * Return: 0 if interrupted by a signal.
 */
int infinite(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * create_pid - Creates a new process and \
 * prints the PID of the new process.
 */
void create_pid(void)
{
	int i = fork();

	if (i == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 * main - Creates 5 zombie processes.
 *
 * Return: 0 if successful
 */
int main(void)
{
	create_pid();
	create_pid();
	create_pid();
	create_pid();
	create_pid();
	return (infinite());
}
