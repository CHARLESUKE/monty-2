#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/**
* struct stack_s - this is the doubly linked list
* representing or representation of a stack (or queue)
* @n: this variable is the integer
* @prev: this variable points 2 d previous element
* of d stack 'or the queue'
* @next: this variable is points 2 d next
* element of d stack (or the queue)
*
* Description: this is the doubly linked list
* node structure for
* stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
* struct instruction_s - this is the opcode and its function
* @opcode: this variable is the opcode
* @f: this variable function is to handle the opcode
*
* Description: this is the opcode and its
* function for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct func_t -structure including arguments
* contents of file file and flag
* @arg: this variable is the  value
* @file: this variable is the monty file
* @content: this variable is th file content
* @fl: this variable is te file flag
* Description: the work is to carries values for each monty
* function
*/
typedef struct func_t
{
	FILE *file;
	char *arg;
	int fl;
	char *content;
}  func_t;
extern func_t func;

/*Task 0*/
void push_function(stack_t **headboy, unsigned int countline);
void pall_function(stack_t **headboy, unsigned int countline);

/*Task 1*/
void monty_pint(stack_t **headboy, unsigned int countline);

/*Task 2*/
void monty_pop(stack_t **headboy, unsigned int countline);

/*Task 3*/
void monty_swap(stack_t **headboy, unsigned int countline);

/*Task 4*/
void monty_add(stack_t **headboy, unsigned int countline);

/*Task 5*/
void monty_nop(stack_t **headboy, unsigned int countline);

/*Task 6*/
void monty_sub(stack_t **headboy, unsigned int countline);

/*Task 7*/
void monty_div(stack_t **headboy, unsigned int countline);

/*Task 8*/
void monty_mul(stack_t **headboy, unsigned int countline);

/*Task 9*/
void monty_mod(stack_t **headboy, unsigned int countline);

/*Task 11*/
void monty_pchar(stack_t **headboy, unsigned int countline);

/*Task 12*/
void monty_pstr(stack_t **headboy, unsigned int countline);

/*Task 13*/
void monty_rotl(stack_t **headboy,  __attribute__((unused)) unsigned int countline);

/*Task 14*/
void monty_rotr(stack_t **headboy, __attribute__((unused)) unsigned int countline);

/*Task 15*/
void monty_queue(stack_t **headboy, unsigned int countline);
void monty_stack(stack_t **headboy, unsigned int countline);

void add_queue(stack_t **head, int new);
/*frees the stack*/
void free_function(stack_t *head);
void new_node(stack_t **head, int new);

/*Executes the opcodes*/
int exec(char *content, stack_t **stack, unsigned int line_counter, FILE *file);

#endif
