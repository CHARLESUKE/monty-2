#include "monty.h"

/**
* free_function - this is the main function that frees
* a doubly linked list using a temp file
* @headboy: thia is a variable pointer to the first element of the stack
* Return: absolutely nothing (null)
*/
void free_function(stack_t *headboy)
{
	stack_t *tmpora;

	tmpora = headboy;
	while (headboy)
	{
		tmpora = headboy->next;
		free(headboy);
		headboy = tmpora;
	}
}
