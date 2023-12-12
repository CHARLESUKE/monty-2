#include "monty.h"

/**
 * push_function - this is the main funct dat adds node
 * 2 d stack at d end
 * @headboy: this variable is the pointer 2 d head stack
 * @countline: this variable is the line count
 * Return: absolutely nothing (void)
 */
void push_function(stack_t **headboy, unsigned int countline)
{
	int b;
	int guide = 0, fuckingflag = 0;

	if (func.arg)
	{
		if (func.arg[0] == '-')
			guide++;
		for (; func.arg[guide] != '\0'; guide++)
		{
			if (func.arg[guide] > 57 || func.arg[guide] < 48)
				fuckingflag = 1;
		}
		if (fuckingflag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", countline);
			fclose(func.file);
			free(func.content);
			free_function(*headboy);
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	b = atoi(func.arg);
	if (func.fl == 0)
		new_node(headboy, b);
	else
		add_queue(headboy, b);
}



/**
 * pall_function - this is the main function that prints all
 * d values on d stack starting from d top of d stack
 * @headboy: this variable is the pointer to head pointer
 * @countline: this variable is the line count
 * Return: absolutey nothing (void)
 */
void pall_function(stack_t **headboy, unsigned int countline)
{
	stack_t *prompt;
	(void)countline;

	prompt = *headboy;
	if (prompt == NULL)
		return;
	while (prompt)
	{
		printf("%d\n", prompt->n);
		prompt = prompt->next;
	}
}
