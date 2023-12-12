#include "monty.h"

/**
* monty_pchar - this main function prints d
* char at d top of d stack followed by a new line
* @headboy: this variable is the head of the stack
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_pchar(stack_t **headboy, unsigned int countline)
{
	stack_t *prompt;

	prompt = *headboy;
	if (!prompt)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	if (prompt->n > 127 || prompt->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", prompt->n);
}
