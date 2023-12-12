#include "monty.h"

/**
* monty_pop - this funct dat removes d top eleme of d stack
* @headboy: this variable is the pointer to the head pointer
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_pop(stack_t **headboy, unsigned int countline)
{
	stack_t *prompt;

	if (*headboy == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	prompt = *headboy;
	*headboy = prompt->next;
	free(prompt);
}
