#include "monty.h"

/**
* new_node - this is the main function dat adds
* a new node to d stack
* @headboy: this variable is the head of the stack
* @latest: this variable ia the new value
* Return: absolutely nothing (void)
*/
void new_node(stack_t **headboy, int latest)
{
	stack_t *tmpora;
	stack_t *new_clot;

	tmpora = *headboy;
	new_clot = malloc(sizeof(stack_t));
	if (new_clot == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tmpora)
		tmpora->prev = new_clot;
	new_clot->n = latest;
	new_clot->next = *headboy;
	new_clot->prev = NULL;
	*headboy = new_clot;
}
