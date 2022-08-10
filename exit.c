#include "main.h"

/**
* exit_cmd - handles the exit command
*
* Return: nothing
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
