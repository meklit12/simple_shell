#include "main.h"

/**
* exit_cmd - handles the exit command
* @command: double pointer
* @line: pointer
* Return: nothing
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
