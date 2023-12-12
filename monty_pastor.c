#include "monty.h"

/**
* monty_pstr - this main funct dat prints d string
* starting at d top of d stack follow by a new
* @headboy: this variable is the head of stack
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_pstr(stack_t **headboy, unsigned int countline)
{
	stack_t *prompt;
	(void)countline;

	prompt = *headboy;
	while (prompt)
	{
		if (prompt->n > 127 || prompt->n <= 0)
		{
			break;
		}
		printf("%c", prompt->n);
		prompt = prompt->next;
	}
	printf("\n");
}
