#include "monty.h"

/**
* monty_swap - this is the main function dat swaps
* d top two elements of d stack
* @headboy: this variable is the head of stack
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_swap(stack_t **headboy, unsigned int countline)
{
	stack_t *prompt;
	int tmpora;
	int linecounter = 0;

	prompt = *headboy;
	while (prompt)
	{
		prompt = prompt->next;
		countline++;
	}
	if (linecounter < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	prompt = *headboy;
	tmpora = prompt->n;
	prompt->n = prompt->next->n;
	prompt->next->n = tmpora;
}
