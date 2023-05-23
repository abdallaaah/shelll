#include "lists.h"
/**
 * execute_me - execute the commands
 * @argv: the tokinezed string hold the command from std input
 * Return: void and dont return any thing
 */
void execute_me(char **argv)
{
/*int i = 0;
char* command = NULL;
if (argv)
{
command = argv[0];
printf("the command is : %s\n",command);
execve(command, argv, NULL);
if (execve(argv[0], argv, NULL) == -1)
{
perror("there is an eror in execve command\n");
}
}*/
char *command = NULL;
char *envp[] = {"PATH=/usr/bin", NULL};
command = argv[0];
if (execve(command, argv, NULL) == -1)
{
perror("Error:");
};
}
