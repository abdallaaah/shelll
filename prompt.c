#include "lists.h"
/**
 * main - the main funvtion which will control every tins
 * Return: void
 */
int main(void)
{
char *line = NULL;
char *dollar = "$ ";
char **str;
char *str_tokend = NULL;
size_t len;
ssize_t nread;
int i = 0;
while (1)
{
write(STDOUT_FILENO, dollar, 2);
nread = getline(&line, &len, stdin);
if (line[nread - 1] == '\n')
{
line[nread - 1] = '\0';
}
if (nread == -1)
{
perror("(Error in getline)");
free(line);
exit(EXIT_FAILURE);
}
/*str = split_to_array(line);*/
str = split_to_array(line);
execute_me(str);
/*str_tokend = commands_to(str);*/
/*here i want to send the str to the function which will check the command*/
}
free(line);
return (0);
}
