#include "monty.h"

/**
* monty_rotr - this main funct dat rotates d stack 2 d
* bottom d last elem of d stack becomes d top elem of d stack
* @headboy: this variable is the head of the stack
* @cunt: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_rotr(stack_t **headboy, __attribute__((unused)) unsigned int cunt)
{
	stack_t *dubby;

	dubby = *headboy;
	if (*headboy == NULL || (*headboy)->next == NULL)
	{
		return;
	}
	while (dubby->next)
	{
		dubby = dubby->next;
	}
	dubby->next = *headboy;
	dubby->prev->next = NULL;
	dubby->prev = NULL;
	(*headboy)->prev = dubby;
	(*headboy) = dubby;
}
