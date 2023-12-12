#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

func_t func = {NULL, NULL, 0, NULL};

/**
* main - this main function is for monty interpretetion
* @arryst: this variable is the argument count
* @argagu: this variable is the argument value
* Return: always return (0) on success
*/
int main(int arryst, char *argagu[])
{
	char *cont;
	FILE *fle;
	unsigned int cunt = 0;
	size_t sze = 0;
	ssize_t lineread = 1;
	stack_t *stk = NULL;

	if (arryst != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fle = fopen(argagu[1], "r");
	func.file = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argagu[1]);
		exit(EXIT_FAILURE);
	}
	while (lineread > 0)
	{
		cont = NULL;
		lineread = getline(&cont, &sze, fle);
		func.content = cont;
		cunt++;
		if (lineread > 0)
		{
			exec(cont, &stk, cunt, fle);
		}
		free(cont);
	}
	free_function(stk);
	fclose(fle);
return (0);
}
