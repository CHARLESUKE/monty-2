#include "monty.h"

/**
* monty_pint - this main funct dat prints
* d top of d stack followed by new line
* @headboy: this variable is the pointer
* 2 d head pointer in d stack
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_pint(stack_t **headboy, unsigned int countline)
{
	if (*headboy == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*headboy)->n);
}
