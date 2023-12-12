#include "monty.h"

/**
* add_queue - this main funct dat add an element 2 d end of a queue
* @latest: this variable is the new value
* @headboy: this variable is the head of the queue
* Return: absolutely nothing (void)
*/
void add_queue(stack_t **headboy, int latest)
{
	stack_t *elem;
	stack_t *sub;

	sub = *headboy;
	elem = malloc(sizeof(stack_t));
	if (elem == NULL)
	{
		printf("Error\n");
	}
	elem->n = latest;
	elem->next = NULL;
	if (sub)
	{
		while (sub->next)
			sub = sub->next;
	}
	if (!sub)
	{
		*headboy = elem;
		elem->prev = NULL;
	}
	else
	{
		sub->next = elem;
		elem->prev = sub;
	}
}


/**
* monty_queue - this main funct that basically sets d format
* of d data to a queue (FIFO)
* @headboy: this variable is the head of queue
* @countline: this variable is the line count
* Return: absolutely nothing (void)
*/
void monty_queue(stack_t **headboy, unsigned int countline)
{
	(void)headboy;
	(void)countline;
	func.fl = 1;
}
