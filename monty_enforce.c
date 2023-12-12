#include "monty.h"

/**
* exec - this main funct dat executes all the monty functs
* @stk: this variable is the head stack
* @countline: this variable is the line count
* @fle: this variable is the pointer to the monty file stream
* @cont: this variable is the line content
* Return: absolutely nothing (void)
*/
int exec(char *cont, stack_t **stk, unsigned int countline, FILE *fle)
{
	instruction_t oppt[] = {
				{"push", push_function}, {"pall", pall_function},
				{"pint", monty_pint},
				{"pop", monty_pop},
				{"swap", monty_swap},
				{"add", monty_add},
				{"nop", monty_nop},
				{"sub", monty_sub}, {"div", monty_div},
				{"mul", monty_mul}, {"mod", monty_mod},
				{"pchar", monty_pchar}, {"pstr", monty_pstr},
				{"rotl", monty_rotl}, {"rotr", monty_rotr},
				{"queue", monty_queue}, {"stack", monty_stack},
				{NULL, NULL}
				};
	char *operate;
	unsigned int j = 0;

	operate = strtok(cont, " \n\t");
	if (operate && operate[0] == '#')
		return (0);
	func.arg = strtok(NULL, " \n\t");
	while (oppt[j].opcode && operate)
	{
		if (strcmp(operate, oppt[j].opcode) == 0)
		{	oppt[j].f(stk, countline);
			return (0);
		}
		j++;
	}
	if (operate && oppt[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", countline, operate);
		fclose(fle);
		free(cont);
		free_function(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
