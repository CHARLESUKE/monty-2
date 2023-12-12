#include "monty.h"

/**
* monty_rotl- this is the main funct dat rotates d
* stack to the top :
* d top elem of d stack becomes d last 1, and d 2nd
* top eleme of d stack becomes d 1st one
* @headboy: this variable is the head of the stack
* @cunt: this variable is the
* Return: absolutely nothing (void)
*/
void monty_rotl(stack_t **headboy,  __attribute__((unused)) unsigned int cunt)
{
	stack_t *sub = *headboy, *auxilary;

	if (*headboy == NULL || (*headboy)->next == NULL)
	{
		return;
	}
	auxilary = (*headboy)->next;
	auxilary->prev = NULL;
	while (sub->next != NULL)
	{
		sub = sub->next;
	}
	sub->next = *headboy;
	(*headboy)->next = NULL;
	(*headboy)->prev = sub;
	(*headboy) = auxilary;
}
