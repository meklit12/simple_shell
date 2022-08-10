#include "main.h"

/**
 *handle_signal- it keeps track is interactive mode
 *
 *Return: nothing
 */

void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "($) ", 2);
}
